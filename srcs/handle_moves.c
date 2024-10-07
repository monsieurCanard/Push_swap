/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:54:31 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/01/26 13:49:46 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	moves_min(t_list *data, int current_v)
{
	if (current_v >= (int)(data->stack_a_size / 2 + 0.5)
		&& data->min_b >= (int)(data->stack_b_size / 2 + 0.5))
	{
		if (data->stack_a_size - 1 - current_v
			>= data->stack_b_size - 1 - data->min_b)
			return (0);
		else
			return ((data->stack_b_size - 1 - data->min_b)
				- (data->stack_a_size - 1 - current_v));
	}
	else if (current_v < (int)(data->stack_a_size / 2 + 0.5)
				&& data->min_b < (int)(data->stack_b_size / 2 + 0.5))
	{
		if (current_v >= data->min_b)
			return (0);
		else
			return (data->min_b - current_v);
	}
	else
	{
		if (data->min_b >= data->stack_b_size - 1)
			return (data->stack_b_size - 1 - data->min_b);
		else
			return (data->min_b);
	}
}

int	moves_max(t_list *data, int current_v)
{
	if (current_v >= (int)(data->stack_a_size / 2 + 0.5)
		&& data->max_b >= (int)(data->stack_b_size / 2 + 0.5))
	{
		if (data->stack_a_size - 1 - current_v
			>= data->stack_b_size - 1 - data->max_b)
			return (0);
		else
			return ((data->stack_b_size - 1 - data->max_b)
				- (data->stack_a_size - 1 - current_v));
	}
	else if (current_v < (int)(data->stack_a_size / 2 + 0.5)
				&& data->max_b < (int)(data->stack_b_size / 2 + 0.5))
	{
		if (current_v >= data->max_b)
			return (0);
		else
			return (data->max_b - current_v);
	}
	else
	{
		if (data->max_b >= data->stack_b_size - 1)
			return (data->stack_b_size - 1 - data->max_b);
		else
			return (data->max_b + 1);
	}
}

int	moves_middle(t_list *data, int current_v)
{
	if (current_v >= (int)(data->stack_a_size / 2 + 0.5)
		&& data->next_nb >= (int)(data->stack_b_size / 2 + 0.5))
	{
		if (data->stack_a_size - 1 - current_v
			>= data->stack_b_size - 1 - data->next_nb)
			return (1);
		else
			return ((data->stack_b_size - 1 - data->next_nb)
				- (data->stack_a_size - 1 - current_v) + 1);
	}
	else if (current_v < (int)(data->stack_a_size / 2 + 0.5)
				&& data->next_nb < (int)(data->stack_b_size / 2 + 0.5))
	{
		if (current_v >= data->next_nb)
			return (0);
		else
			return (data->next_nb - current_v);
	}
	else
	{
		if (data->next_nb >= data->stack_b_size - 1)
			return (data->stack_b_size - 1 - data->next_nb + 1);
		else
			return (data->next_nb);
	}
}

int	moves_to_top_stack_a(t_list *data, int current_v)
{
	if (current_v >= (int)(data->stack_a_size / 2 + 0.5))
		return (data->stack_a_size - 1 - current_v);
	else
		return (current_v + 1);
}
