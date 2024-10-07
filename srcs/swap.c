/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:11:39 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/02/05 13:29:02 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	swap_a(t_list *data)
{
	int	tmp;

	tmp = 0;
	if (data->stack_a_size < 2)
		return ;
	tmp = data->stack_a[data->stack_a_size - 1];
	data->stack_a[data->stack_a_size - 1]
		= data->stack_a[data->stack_a_size - 2];
	data->stack_a[data->stack_a_size - 2] = tmp;
}

static void	swap_b(t_list *data)
{
	int	tmp;

	tmp = 0;
	if (data->stack_b_size < 2)
		return ;
	tmp = data->stack_b[data->stack_b_size - 1];
	data->stack_b[data->stack_b_size - 1]
		= data->stack_b[data->stack_b_size - 2];
	data->stack_b[data->stack_b_size - 2] = tmp;
}

void	swap(t_list *data, char mode)
{
	int	tmp;

	tmp = 0;
	if (mode == 'a')
		swap_a(data);
	else if (mode == 'b')
		swap_b(data);
	else if (mode == 'x')
	{
		swap_a(data);
		swap_b(data);
	}
}
