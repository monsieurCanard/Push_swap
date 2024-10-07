/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 14:30:08 by anthony           #+#    #+#             */
/*   Updated: 2024/01/26 13:50:46 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	verif_doublon(t_list *data)
{
	int		tmp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tmp = 0;
	while (i < data->stack_a_size)
	{
		tmp = data->stack_a[i];
		while (j < data->stack_a_size)
		{
			if (tmp == data->stack_a[j] && i != j)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

void	verif_list(t_list *data)
{
	if (verif_doublon(data) == 0)
		free_all_error(data);
}
