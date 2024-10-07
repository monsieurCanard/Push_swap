/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:42:04 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2024/02/06 12:42:04 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (((char *)s1)[i] != ((char *)s2)[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (((char *)s1)[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
