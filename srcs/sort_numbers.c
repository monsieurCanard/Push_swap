/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:44:27 by anthony           #+#    #+#             */
/*   Updated: 2024/01/26 13:50:38 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	handle_case(t_list *data, int index_b, int index_a)
{
	if (data->cheap_nb == data->stack_a_size - 1 && data->next_nb == 0)
		return ;
	else if (data->cheap_nb == (data->stack_a_size - 1)
		&& data->next_nb >= index_b)
		case_perfect1_a(data);
	else if (data->cheap_nb == (data->stack_a_size - 1)
		&& data->next_nb < index_b)
		case_perfect2_a(data);
	else if (data->cheap_nb >= index_a && data->next_nb == 0)
		case_perfect1_b(data);
	else if (data->cheap_nb < index_a && data->next_nb == 0)
		case_perfect2_b(data);
	else if (data->cheap_nb >= index_a && data->next_nb >= index_b)
		case_rotate_both(data);
	else if (data->cheap_nb < index_a && data->next_nb < index_b)
		case_reverse_rotate_both(data);
	else
		handle_case_hard(data);
}

void	sort_numbers(t_list *data)
{
	int	i;
	int	index_b;
	int	index_a;

	index_b = (int)(data->stack_b_size / 2.0 - 0.5);
	index_a = (int)(data->stack_a_size / 2.0 - 0.5);
	i = 0;
	find_max_min_stack(data);
	if (data->stack_a[data->cheap_nb] > data->stack_b[data->max_b]
		|| data->stack_a[data->cheap_nb] < data->stack_b[data->min_b])
	{
		handle_min_max(data);
		return ;
	}
	find_next(data, data->cheap_nb);
	handle_case(data, index_b, index_a);
	print_push_b(data);
	return ;
}
