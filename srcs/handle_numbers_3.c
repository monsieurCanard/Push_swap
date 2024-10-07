/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_numbers_3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:08:39 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/01/26 13:49:53 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_rotate_a(t_list *data)
{
	ft_putstr_fd("ra\n", 1);
	rotate_a(data);
}

void	print_rotate_b(t_list *data)
{
	ft_putstr_fd("rb\n", 1);
	rotate_b(data);
}
