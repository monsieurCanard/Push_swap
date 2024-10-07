/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:49:33 by marvin            #+#    #+#             */
/*   Updated: 2023/10/18 11:49:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

void	*ft_calloc(size_t nb, size_t size)
{
	void	*alloc;

	if (nb != 0 && size > UINTMAX_MAX / nb)
		return (NULL);
	alloc = malloc(nb * size);
	if (alloc == NULL)
		return (NULL);
	ft_bzero (alloc, nb * size);
	return (alloc);
}
