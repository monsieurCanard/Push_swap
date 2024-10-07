/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pocket_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:37:54 by anthony           #+#    #+#             */
/*   Updated: 2024/01/26 13:50:13 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	case_2_number(t_list *data)
{
	if (data->stack_a[0] < data->stack_a[1])
		ft_putstr_fd("sa\n", 1);
}

static void	case_1(t_list *data)
{
	print_rotate_a(data);
	print_swap_a(data);
}

static void	case_2(t_list *data)
{
	ft_putstr_fd("rra\n", 1);
	reverse_rotate_a(data);
	if (data->stack_a[1] < data->stack_a[2])
	{
		ft_putstr_fd("sa\n", 1);
		swap(data, 'a');
	}
}

void	pocket_swap(t_list *data)
{
	if (data->stack_a_size == 2)
		case_2_number(data);
	else
	{
		if (data->stack_a[0] < data->stack_a[1]
			&& data->stack_a[1] < data->stack_a[2])
			case_1(data);
		else if (data->stack_a[0] < data->stack_a[1])
			case_2(data);
		else if (data->stack_a[0] > data->stack_a[1]
			&& data->stack_a[1] < data->stack_a[2]
			&& data->stack_a[2] < data->stack_a[0])
		{
			ft_putstr_fd("sa\n", 1);
			swap(data, 'a');
		}
		else if (data->stack_a[0] > data->stack_a[1]
			&& data->stack_a[1] < data->stack_a[2]
			&& data->stack_a[2] > data->stack_a[0])
		{
			ft_putstr_fd("ra\n", 1);
			rotate_a(data);
		}
	}
	return ;
}
