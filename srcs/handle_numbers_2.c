/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_numbers_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:07:37 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/02/01 10:44:44 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_push_a(t_list *data)
{
	ft_putstr_fd("pa\n", 1);
	push(data, 'a');
}

void	print_push_b(t_list *data)
{
	ft_putstr_fd("pb\n", 1);
	push(data, 'b');
}

void	print_swap_a(t_list *data)
{
	ft_putstr_fd("sa\n", 1);
	swap(data, 'a');
}

void	print_swap_b(t_list *data)
{
	ft_putstr_fd("sb\n", 1);
	swap(data, 'b');
}

void	print_swap_x(t_list *data)
{
	ft_putstr_fd("ss\n", 1);
	swap(data, 'x');
}
