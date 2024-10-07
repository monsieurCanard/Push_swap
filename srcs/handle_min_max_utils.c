/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_min_max_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:01:30 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/01/26 13:49:39 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	handle_rotate_a(t_list *data)
{
	while (data->cheap_nb != data->stack_a_size - 1)
	{
		print_rotate_a(data);
		data->cheap_nb++;
	}
	return ;
}

void	handle_reverse_rotate_a(t_list *data)
{
	while (data->cheap_nb != data->stack_a_size - 1)
	{
		print_reverse_rotate_a(data);
		data->cheap_nb--;
		if (data->cheap_nb < 0)
			data->cheap_nb = data->stack_a_size - 1;
	}
	return ;
}
