/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:54:33 by anthony           #+#    #+#             */
/*   Updated: 2024/01/26 13:49:56 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_rotate_all(t_list *data)
{
	ft_putstr_fd("rr\n", 1);
	rotate_all(data);
}

void	print_reverse_rotate_a(t_list *data)
{
	ft_putstr_fd("rra\n", 1);
	reverse_rotate_a(data);
}

void	print_reverse_rotate_b(t_list *data)
{
	ft_putstr_fd("rrb\n", 1);
	reverse_rotate_b(data);
}

void	print_reverse_rotate_all(t_list *data)
{
	ft_putstr_fd("rrr\n", 1);
	reverse_rotate_all(data);
}
