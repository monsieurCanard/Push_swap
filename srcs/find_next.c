/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_next.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 10:54:31 by monsieurc         #+#    #+#             */
/*   Updated: 2024/01/26 13:49:14 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	find_next(t_list *data, int nb)
{
	int	j;
	int	next_value;
	int	pos;

	pos = data->stack_b_size - 1;
	j = 0;
	next_value = 2147483645;
	while (pos - j >= 0)
	{
		if (data->stack_b[pos - j] > data->stack_a[nb]
			&& data->stack_b[pos - j] - data->stack_a[nb] < next_value)
		{
			next_value = data->stack_b[pos - j] - data->stack_a[nb];
			data->next_nb = pos - j;
		}
		j++;
	}
	return ;
}
