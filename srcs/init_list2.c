/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:28:48 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/02/05 11:32:58 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init_data(t_list *data)
{
	data->stack_a = malloc(sizeof(int) * data->stack_a_size);
	if (data->stack_a == NULL)
		free_all_error(data);
	data->stack_b_size = 0;
	data->stack_b = malloc(sizeof(int) * data->stack_a_size);
	if (data->stack_b == NULL)
		free_all_error(data);
}

void	init_field(int argc, t_list *data)
{
	data->stack_a_size = argc - 1;
	data->stack_a = NULL;
	data->stack_b = NULL;
	data->buffer = NULL;
}

void	init_data_split(t_list *data, char **split_arg)
{
	data->stack_a = malloc(sizeof(int) * data->stack_a_size);
	if (data->stack_a == NULL)
		free_all_error_split(data, split_arg);
	data->stack_b = malloc(sizeof(int) * data->stack_a_size);
	if (data->stack_b == NULL)
		free_all_error_split(data, split_arg);
}
