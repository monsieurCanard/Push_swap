/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pocket_swap_reverse.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:53:12 by monsieurc         #+#    #+#             */
/*   Updated: 2024/01/26 13:50:10 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pocket_swap_reverse(t_list *data)
{
	if (data->min_a == 0)
	{
		if (data->stack_a[1] > data->stack_a[data->stack_a_size - 1])
			return ;
		else
			print_swap_a(data);
	}
	else if (data->min_a == 1)
	{
		if (data->stack_a[0] > data->stack_a[data->stack_a_size - 1])
			print_reverse_rotate_a(data);
		else
			print_rotate_a(data);
	}
	else
	{
		if (data->stack_a[0] > data->stack_a[data->stack_a_size - 1])
		{
			print_swap_a(data);
			print_reverse_rotate_a(data);
		}
		else
			print_rotate_a(data);
	}
}
