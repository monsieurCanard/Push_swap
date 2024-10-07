/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_rotate_both.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:08:29 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/01/26 13:50:42 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	case_rotate_both(t_list *data)
{
	while (data->cheap_nb != data->stack_a_size - 1
		&& data->next_nb != 0)
	{
		print_rotate_all(data);
		data->cheap_nb++;
		data->next_nb++;
		if (data->next_nb > data->stack_b_size - 1)
			data->next_nb = 0;
	}
	if (data->cheap_nb == data->stack_a_size - 1
		&& data->next_nb != 0)
		case_perfect1_a(data);
	else if (data->cheap_nb != data->stack_a_size - 1
		&& data->next_nb == 0)
		case_perfect1_b(data);
	return ;
}

void	case_reverse_rotate_both(t_list *data)
{
	while (data->cheap_nb != data->stack_a_size - 1
		&& data->next_nb != 0)
	{
		print_reverse_rotate_all(data);
		data->cheap_nb--;
		data->next_nb--;
		if (data->cheap_nb < 0)
			data->cheap_nb = data->stack_a_size - 1;
	}
	if (data->cheap_nb == data->stack_a_size - 1
		&& data->next_nb != 0)
		case_perfect2_a(data);
	else if (data->cheap_nb != data->stack_a_size - 1
		&& data->next_nb == 0)
		case_perfect2_b(data);
	else
		return ;
	return ;
}
