/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_commands.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:02:56 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/02/06 12:43:57 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	handle_push(t_list *data, char *command)
{
	if (ft_strcmp(command, "pa") == 0)
		push(data, 'a');
	else if (ft_strcmp(command, "pb") == 0)
		push(data, 'b');
	return ;
}

void	launch_command(t_list *data, char *command)
{
	if (ft_strcmp(command, "ra") == 0)
		rotate_a(data);
	else if (ft_strcmp(command, "rb") == 0)
		rotate_b(data);
	else if (ft_strcmp(command, "rr") == 0)
		rotate_all(data);
	else if (ft_strcmp(command, "pa") == 0)
		handle_push(data, command);
	else if (ft_strcmp(command, "pb") == 0)
		handle_push(data, command);
	else if (ft_strcmp(command, "sa") == 0)
		swap(data, 'a');
	else if (ft_strcmp(command, "sb") == 0)
		swap(data, 'b');
	else if (ft_strcmp(command, "ss") == 0)
		swap(data, 'x');
	else if (ft_strcmp(command, "rrb") == 0)
		reverse_rotate_b(data);
	else if (ft_strcmp(command, "rra") == 0)
		reverse_rotate_a(data);
	else if (ft_strcmp(command, "rrr") == 0)
		reverse_rotate_all(data);
	else
		free_checker(data, command);
	return ;
}

void	execute_commands(t_list *data)
{
	char	*command;
	int		i;
	int		j;

	i = 0;
	command = malloc(sizeof(char) * 5);
	if (command == NULL)
		free_all_error(data);
	while (data->buffer[i] != '\0')
	{
		j = 0;
		while (j < 4 && data->buffer[i] != '\n' && data->buffer[i] != '\0')
		{
			command[j] = data->buffer[i];
			i++;
			j++;
		}
		command[j] = '\0';
		launch_command(data, command);
		i += 1;
	}
	free(command);
	free(data->buffer);
	return ;
}
