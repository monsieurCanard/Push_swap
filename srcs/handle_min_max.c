/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_min_max.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:51:53 by anthony           #+#    #+#             */
/*   Updated: 2024/02/01 10:53:08 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	find_max_min_stack_a(t_list *data, int i)
{
	if (data->stack_a[i] > data->stack_a[data->max_a])
		data->max_a = i;
	if (data->stack_a[i] < data->stack_a[data->min_a])
		data->min_a = i;
	return ;
}

void	find_max_min_stack(t_list *data)
{
	int	i;

	if (data->stack_a_size > 0)
	{
		i = -1;
		data->max_a = i + 1;
		data->min_a = i + 1;
		while (++i < data->stack_a_size)
			find_max_min_stack_a(data, i);
	}
	if (data->stack_b_size > 0)
	{
		i = 0;
		data->max_b = i;
		data->min_b = i;
		while (i < data->stack_b_size)
		{
			if (data->stack_b[i] > data->stack_b[data->max_b])
				data->max_b = i;
			if (data->stack_b[i] < data->stack_b[data->min_b])
				data->min_b = i;
			i++;
		}
	}
	return ;
}

void	handle_min(t_list *data)
{
	if (data->cheap_nb + 1 >= (int)(data->stack_a_size / 2.0 + 0.5))
		handle_rotate_a(data);
	else
		handle_reverse_rotate_a(data);
	if (data->min_b + 1 > (int)(data->stack_b_size / 2.0 + 0.5))
	{
		while (data->min_b != 0)
		{
			print_rotate_b(data);
			data->min_b++;
			if (data->min_b > data->stack_b_size - 1)
				data->min_b = 0;
		}
	}
	else
	{
		while (data->min_b != 0)
		{
			print_reverse_rotate_b(data);
			data->min_b--;
		}
	}
	print_push_b(data);
	return ;
}

void	handle_max(t_list *data)
{
	if (data->cheap_nb + 1 > (int)(data->stack_a_size / 2.0 + 0.5))
		handle_rotate_a(data);
	else
		handle_reverse_rotate_a(data);
	if (data->max_b + 1 >= (int)(data->stack_b_size / 2.0 + 0.5))
	{
		while (data->max_b != data->stack_b_size - 1)
		{
			print_rotate_b(data);
			data->max_b++;
		}
	}
	else
	{
		while (data->max_b != data->stack_b_size - 1)
		{
			print_reverse_rotate_b(data);
			data->max_b--;
			if (data->max_b < 0)
				data->max_b = data->stack_b_size - 1;
		}
	}
	print_push_b(data);
	return ;
}

void	handle_min_max(t_list *data)
{
	if (data->stack_a[data->cheap_nb] > data->stack_b[data->max_b])
		handle_max(data);
	else if (data->stack_a[data->cheap_nb] < data->stack_b[data->min_b])
		handle_min(data);
	return ;
}
