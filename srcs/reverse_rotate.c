/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:26:03 by anthony           #+#    #+#             */
/*   Updated: 2024/01/26 13:50:24 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reverse_rotate_a(t_list *data)
{
	int	tmp;
	int	tmp2;
	int	i;

	i = 0;
	tmp = 0;
	tmp2 = 0;
	tmp = data->stack_a[0];
	while (data->stack_a_size - 1 - i > 0)
	{
		tmp2 = data->stack_a[data->stack_a_size - 1 - i];
		data->stack_a[data->stack_a_size - 1 - i] = tmp;
		tmp = tmp2;
		i++;
	}
	data->stack_a[0] = tmp;
}

void	reverse_rotate_b(t_list *data)
{
	int	tmp;
	int	tmp2;
	int	i;

	i = 0;
	tmp = 0;
	tmp2 = 0;
	tmp = data->stack_b[0];
	while (data->stack_b_size - 1 - i > 0)
	{
		tmp2 = data->stack_b[data->stack_b_size - 1 - i];
		data->stack_b[data->stack_b_size - 1 - i] = tmp;
		tmp = tmp2;
		i++;
	}
	data->stack_b[0] = tmp;
}

void	reverse_rotate_all(t_list *data)
{
	reverse_rotate_a(data);
	reverse_rotate_b(data);
}
