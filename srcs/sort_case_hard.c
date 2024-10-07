/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_case_hard.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:14:52 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/01/26 13:50:31 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	handle_cheap_nb(t_list *data)
{
	if (data->cheap_nb + 1 >= (int)(data->stack_a_size / 2.0 + 0.5))
	{
		while (data->cheap_nb != data->stack_a_size - 1)
		{
			print_rotate_a(data);
			data->cheap_nb++;
		}
	}
	else
	{
		while (data->cheap_nb != data->stack_a_size - 1)
		{
			print_reverse_rotate_a(data);
			data->cheap_nb--;
			if (data->cheap_nb < 0)
				data->cheap_nb = data->stack_a_size - 1;
		}
	}
	return ;
}

static void	handle_next_nb(t_list *data)
{
	if (data->next_nb + 1 >= (int)(data->stack_b_size / 2.0 + 0.5))
	{
		while (data->next_nb != 0)
		{
			print_rotate_b(data);
			data->next_nb++;
			if (data->next_nb > data->stack_b_size - 1)
				data->next_nb = 0;
		}
	}
	else
	{
		while (data->next_nb != 0)
		{
			print_reverse_rotate_b(data);
			data->next_nb--;
		}
	}
	return ;
}

void	case_hard1(t_list *data)
{
	if (data->cheap_nb + 1 >= (int)(data->stack_a_size / 2.0 + 0.5))
	{
		while (data->cheap_nb != data->stack_a_size - 1)
		{
			print_rotate_a(data);
			data->cheap_nb++;
		}
		handle_next_nb(data);
	}
	else
	{
		while (data->cheap_nb != data->stack_a_size - 1)
		{
			print_reverse_rotate_a(data);
			data->cheap_nb--;
			if (data->cheap_nb < 0)
				data->cheap_nb = data->stack_a_size - 1;
		}
		handle_next_nb(data);
	}
	return ;
}

void	case_hard2(t_list *data)
{
	if (data->next_nb + 1 >= (int)(data->stack_b_size / 2.0 + 0.5))
	{
		while (data->next_nb != 0)
		{
			print_rotate_b(data);
			data->next_nb++;
			if (data->next_nb > data->stack_b_size - 1)
				data->next_nb = 0;
		}
	}
	else
	{
		while (data->next_nb != 0)
		{
			print_reverse_rotate_b(data);
			data->next_nb--;
		}
	}
	return ;
}

void	handle_case_hard(t_list *data)
{
	int	dist_1;
	int	dist_2;

	dist_1 = 0;
	dist_2 = 0;
	if (data->cheap_nb + 1 >= (int)(data->stack_a_size / 2 + 0.5))
		dist_1 = data->stack_a_size - 1 - data->cheap_nb;
	else
		dist_1 = data->cheap_nb + 1;
	if (data->next_nb + 1 >= (int)(data->stack_b_size / 2 + 0.5))
		dist_2 = data->stack_b_size - 1 - data->next_nb;
	else
		dist_2 = data->next_nb + 1;
	if (dist_1 < dist_2)
		case_hard1(data);
	else
	{
		case_hard2(data);
		handle_cheap_nb(data);
	}
	return ;
}
