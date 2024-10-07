/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pocket_swap_5.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:17:38 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/01/26 13:50:08 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	put_smallest_to_b(t_list *data)
{
	find_max_min_stack(data);
	while (data->min_a != data->stack_a_size - 1)
	{
		if (data->min_a >= (int)(data->stack_a_size / 2 + 0.5))
		{
			print_rotate_a(data);
			data->min_a++;
		}
		else
		{
			print_reverse_rotate_a(data);
			data->min_a--;
			if (data->min_a < 0)
				data->min_a = data->stack_a_size - 1;
		}
	}
	print_push_b(data);
	return ;
}

void	pocket_swap_5(t_list *data)
{
	int	i;

	i = 0;
	while (data->stack_a_size > 3)
	{
		put_smallest_to_b(data);
		i++;
	}
	pocket_swap(data);
	while (i > 0)
	{
		print_push_a(data);
		i--;
	}
	return ;
}
