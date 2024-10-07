/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:20:38 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/02/05 11:56:27 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_all_error_split(t_list *data, char **split_arg)
{
	int	i;

	i = 0;
	if (split_arg != NULL)
	{
		while (split_arg[i] != NULL)
		{
			free(split_arg[i]);
			i++;
		}
	}
	free(split_arg);
	if (data->stack_a != NULL)
		free (data->stack_a);
	if (data->stack_b != NULL)
		free (data->stack_b);
	if (data->buffer != NULL)
		free (data->buffer);
	free (data);
	handle_error();
}

void	free_all_error(t_list *data)
{
	if (data->stack_a != NULL)
		free (data->stack_a);
	if (data->stack_b != NULL)
		free (data->stack_b);
	if (data->buffer != NULL)
		free (data->buffer);
	if (data != NULL)
		free (data);
	handle_error();
}

void	free_all(t_list *data)
{
	if (data->stack_a != NULL)
		free (data->stack_a);
	if (data->stack_b != NULL)
		free (data->stack_b);
	if (data != NULL)
		free (data);
}

void	free_data(t_list *data)
{
	if (data != NULL)
		free (data);
	handle_error();
}

void	free_checker(t_list *data, char *command)
{
	free(command);
	free(data->buffer);
	free_all(data);
	handle_error();
}
