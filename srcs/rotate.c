/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:19:51 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/01/26 13:50:26 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_a(t_list *data)
{
	int	tmp;
	int	tmp2;
	int	i;

	i = 0;
	tmp = 0;
	tmp2 = 0;
	if (data->stack_a_size < 2)
		return ;
	tmp = data->stack_a[data->stack_a_size - 1];
	while (i < data->stack_a_size - 1)
	{
		tmp2 = data->stack_a[i];
		data->stack_a[i] = tmp;
		tmp = tmp2;
		i++;
	}
	data->stack_a[data->stack_a_size - 1] = tmp;
}

void	rotate_b(t_list *data)
{
	int	tmp;
	int	tmp2;
	int	i;

	i = 0;
	tmp = 0;
	tmp2 = 0;
	if (data->stack_b_size < 2)
		return ;
	tmp = data->stack_b[data->stack_b_size - 1];
	while (i < data->stack_b_size - 1)
	{
		tmp2 = data->stack_b[i];
		data->stack_b[i] = tmp;
		tmp = tmp2;
		i++;
	}
	data->stack_b[data->stack_b_size - 1] = tmp;
}

void	rotate_all(t_list *data)
{
	rotate_a(data);
	rotate_b(data);
}
