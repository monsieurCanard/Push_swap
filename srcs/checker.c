/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:08:16 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/02/05 13:25:35 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	*ft_realloc(t_list *data, int buffer_len)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc (sizeof(char) * (buffer_len + BUFFER_SIZE + 1));
	if (!new)
		free_all_error(data);
	while (data->buffer[i] != 0)
	{
		new[i] = data->buffer[i];
		i++;
	}
	new[i] = '\0';
	free (data->buffer);
	return (new);
}

static void	get_data_std(t_list *data, int index, int count_word)
{
	while (index != -1)
	{
		count_word = ft_strlen(data->buffer);
		data->buffer = ft_realloc(data, count_word);
		index = read(0, &data->buffer[count_word], 5);
		if (index >= 0)
			data->buffer[count_word + index] = '\0';
		if (index == 0)
			break ;
		data->buffer = ft_realloc(data, count_word);
	}
}

int	main(int argc, char *argv[])
{
	t_list	*data;
	int		index;
	int		count_word;

	if (argc == 1)
		return (0);
	index = 0;
	data = NULL;
	count_word = 0;
	data = init_list(argc, argv, data);
	verif_list(data);
	data->buffer = malloc(sizeof(char) * 5);
	if (data->buffer == NULL)
		free_all_error(data);
	data->buffer[0] = '\0';
	get_data_std(data, index, count_word);
	execute_commands(data);
	if (check_sort(data) == 1)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	return (free_all(data), 0);
}
