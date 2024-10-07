/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 15:02:07 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/01/30 12:31:47 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	find_and_sort_cheapest(t_list *data)
{
	data->cheap_nb = calcul_cheapest(data);
	sort_numbers(data);
}

void	push_swap(t_list *data)
{
	first_phase(data);
	while (data->stack_a_size > (int)(data->nb_arg / 16 + 0.5))
		find_and_sort_cheapest(data);
	find_max_min_stack(data);
	while (data->max_b != data->stack_b_size - 1)
	{
		if (data->max_b >= (int)(data->stack_b_size / 2 + 0.5))
		{
			print_rotate_b(data);
			data->max_b++;
		}	
		else
		{
			print_reverse_rotate_b(data);
			data->max_b--;
			if (data->max_b < 0)
				data->max_b = data->stack_b_size - 1;
		}
	}
	pocket_swap_5(data);
	second_phase(data);
	return ;
}
