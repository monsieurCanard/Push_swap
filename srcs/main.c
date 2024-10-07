/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:36:59 by Monsieur Ca       #+#    #+#             */
/*   Updated: 2024/02/02 16:27:23 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*data;

	data = NULL;
	if (argc == 1)
		return (0);
	data = init_list(argc, argv, data);
	if (data == NULL)
		return (free_all_error(data), 0);
	verif_list(data);
	if (check_sort(data) == 1)
		return (free_all(data), 0);
	if (data->stack_a_size <= 3)
	{
		pocket_swap(data);
		return (free_all(data), 0);
	}
	if (data->stack_a_size <= 5)
	{
		pocket_swap_5(data);
		return (free_all(data), 0);
	}
	push_swap(data);
	return (free_all(data), 0);
}
