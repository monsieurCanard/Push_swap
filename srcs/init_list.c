/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:51:46 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/02/05 11:36:40 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	free_split(char **split_arg, int i)
{
	while (--i >= 0)
		free(split_arg[i]);
	free(split_arg);
	return ;
}

void	init_split_arg(t_list *data, char **argv)
{
	int		i;
	char	**split_arg;

	i = 0;
	split_arg = ft_split(argv[1], ' ');
	if (!split_arg)
		free_all_error_split(data, NULL);
	while (split_arg[i] != 0)
		i++;
	data->stack_a_size = i;
	data->stack_b_size = 0;
	init_data_split(data, split_arg);
	i = -1;
	while (split_arg[++i] != NULL)
	{
		if (ft_isdigit(split_arg[i]) == 0)
			free_all_error_split(data, split_arg);
		data->stack_a[data->stack_a_size - 1 - i]
			= ft_atol_split(split_arg[i], data, split_arg);
	}
	data->nb_arg = i;
	free_split(split_arg, i);
}

t_list	*init_list(int argc, char **argv, t_list *data)
{
	int		j;
	int		i;

	i = -1;
	if (argc == 2 && argv[1][0] == '\0')
		handle_error();
	data = malloc (sizeof(t_list));
	if (data == NULL)
		free_data(data);
	init_field(argc, data);
	if (argc == 2)
	{
		init_split_arg(data, argv);
		return (data);
	}
	init_data(data);
	j = data->stack_a_size + 1;
	while (--j > 0)
	{
		if (ft_isdigit(argv[j]) == 0)
			free_all_error(data);
		data->stack_a[++i] = ft_atol(argv[j], data);
	}
	data->nb_arg = argc - 1;
	return (data);
}
