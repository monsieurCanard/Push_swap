/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:19:25 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/02/01 09:56:04 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push(t_list *data, char mode)
{
	int	tmp;

	tmp = 0;
	if (mode == 'a')
	{
		if (data->stack_b_size == 0)
			return ;
		tmp = data->stack_b[--data->stack_b_size];
		data->stack_b[data->stack_b_size] = 0;
		data->stack_a[data->stack_a_size++] = tmp;
	}
	else if (mode == 'b')
	{
		if (data->stack_a_size == 0)
			return ;
		tmp = data->stack_a[--data->stack_a_size];
		data->stack_a[data->stack_a_size] = 0;
		data->stack_b[data->stack_b_size++] = tmp;
	}
}
