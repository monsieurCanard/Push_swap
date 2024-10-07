/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul_cheapest.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:20:50 by anthony           #+#    #+#             */
/*   Updated: 2024/02/01 10:39:12 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	case_perfect(t_list *data, int cheapest_nb)
{
	if (data->stack_a_size > 0 && data->stack_b_size > 0
		&& data->stack_a[data->stack_a_size - 1]
		== data->stack_b[data->stack_b_size - 1] + 1)
	{
		cheapest_nb = data->stack_a_size - 1;
		return (cheapest_nb);
	}
	else
		return (-1);
}

static int	get_cheapest(t_list *data, int current_v, int moves, int cheap_move)
{
	int	i;
	int	cheapest_nb;

	cheapest_nb = 0;
	i = -1;
	while (++i <= data->stack_a_size - 1)
	{	
		moves = 0;
		current_v = data->stack_a_size - 1 - i;
		find_next(data, data->stack_a_size - 1 - i);
		moves += moves_to_top_stack_a(data, current_v);
		if (data->stack_a[current_v] < data->stack_b[data->min_b])
			moves += moves_min(data, current_v);
		else if (data->stack_a[current_v] > data->stack_b[data->max_b])
			moves += moves_max(data, current_v);
		else
			moves += moves_middle(data, current_v);
		if (moves < cheap_move)
		{
			cheap_move = moves;
			cheapest_nb = data->stack_a_size - 1 - i;
		}
	}
	return (cheapest_nb);
}

int	calcul_cheapest(t_list *data)
{
	int	cheapest_nb;
	int	moves;
	int	current_value;
	int	cheapest_move;

	cheapest_move = INT_MAX;
	cheapest_nb = 0;
	current_value = 0;
	moves = 0;
	current_value = data->stack_a[data->stack_a_size - 1];
	if (case_perfect(data, cheapest_nb) != -1)
		return (case_perfect(data, cheapest_nb));
	find_max_min_stack(data);
	cheapest_nb = get_cheapest(data, current_value, moves, cheapest_move);
	return (cheapest_nb);
}
