/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:57:34 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/01/26 13:48:57 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_sort(t_list *data)
{
	int	i;

	i = 0;
	while (i < data->stack_a_size - 1)
	{
		if (data->stack_a[i] < data->stack_a[i + 1])
			return (0);
		i++;
	}
	if (data->stack_b_size == 0)
		return (1);
	else
		return (0);
}
