/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:56:57 by anthony           #+#    #+#             */
/*   Updated: 2024/02/05 11:37:26 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	count_delim(const char *s, char c)
{
	int	j;
	int	compt;
	int	on;

	j = 0;
	compt = 0;
	on = 0;
	while (s[j])
	{
		if (s[j] == c)
			on = 0;
		else if (on == 0)
		{
			compt++;
			on = 1;
		}
		j++;
	}
	return (compt);
}

static char	**free_all_split(char **tofree, int index)
{
	char	**split_light;

	split_light = NULL;
	if (index >= 0)
	{
		index = 0;
		while (tofree[index])
		{
			free(tofree[index]);
			index++;
		}
	}
	free(tofree);
	return (NULL);
}

static int	count_word(const char *s, char c, int pos)
{
	int	tmp;
	int	compt;

	tmp = pos;
	compt = 0;
	while (((char *)s)[tmp] != c && ((char *)s)[tmp] != '\0')
	{
		compt++;
		tmp++;
	}
	return (compt);
}

static char	**_insert_data(const char *s, char c, char **split, int count_array)
{
	int	j;
	int	k;
	int	i;

	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	while (((char *)s)[i] != '\0' && j < count_array)
	{
		while (((char *)s)[i] == c)
			i++;
		split[j] = malloc(sizeof(char) * count_word(s, c, i) + 1);
		if (split[j] == NULL)
			return (free_all_split(split, j));
		k = 0;
		while (((char *)s)[i] != c && ((char *)s)[i] != '\0')
		{
			split[j][k++] = ((char *)s)[i++];
		}
		split[j][k] = '\0';
		j++;
	}
	split[j] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	int		count_array;
	char	**split;

	split = NULL;
	count_array = 0;
	count_array = count_delim((char *)s, c);
	split = (char **)malloc (sizeof(char **) * (count_array + 1));
	if (!split)
		return (NULL);
	return (_insert_data(s, c, split, count_array));
}
