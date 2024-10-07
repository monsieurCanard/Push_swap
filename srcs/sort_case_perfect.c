/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_case_perfect.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:47:56 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/01/26 13:50:34 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	case_perfect1_b(t_list *data)
{
	while (data->cheap_nb != data->stack_a_size - 1)
	{
		print_rotate_a(data);
		data->cheap_nb++;
	}
	return ;
}

void	case_perfect2_b(t_list *data)
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

void	case_perfect1_a(t_list *data)
{
	while (data->next_nb != 0)
	{
		print_rotate_b(data);
		data->next_nb++;
		if (data->next_nb > data->stack_b_size - 1)
			data->next_nb = 0;
	}
	return ;
}

void	case_perfect2_a(t_list *data)
{
	while (data->next_nb != 0)
	{
		print_reverse_rotate_b(data);
		data->next_nb--;
	}
	return ;
}
