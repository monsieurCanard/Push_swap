/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_phase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:47:04 by monsieurc         #+#    #+#             */
/*   Updated: 2024/02/05 12:16:41 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	second_phase(t_list *data)
{
	int	i;

	i = 0;
	find_max_min_stack(data);
	if (data->stack_a_size > 0 && data->stack_b_size > 0
		&& data->stack_a[data->max_a] > data->stack_b[data->max_b]
		&& data->max_a == 0 && data->max_b == (data->stack_b_size - 1))
		print_reverse_rotate_a(data);
	while (data->stack_b_size != 0)
	{
		if (data->stack_a_size > 0 && data->stack_b_size > 0
			&& data->stack_a[0] > data->stack_b[data->stack_b_size - 1]
			&& data->stack_a[0] < data->stack_a[data->stack_a_size - 1])
		{
			print_reverse_rotate_a(data);
		}
		else
			print_push_a(data);
	}
	while (data->stack_a_size > 0
		&& data->stack_a[0] < data->stack_a[data->stack_a_size - 1])
		print_reverse_rotate_a(data);
	return ;
}
