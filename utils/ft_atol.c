/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 14:47:44 by anthony           #+#    #+#             */
/*   Updated: 2024/01/06 14:47:44 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/push_swap.h"

static int	ft_whitespace(char c)
{
	if (c == '\n' || c == '\r' || c == '\t' || c == '\v'
		|| c == '\f' || c == ' ')
		return (0);
	return (1);
}

int	ft_atol(char *str, t_list *data)
{
	int		i;
	int		conv;
	double	conv2;
	int		sign;

	(void)data;
	conv = 0;
	i = 0;
	sign = 1;
	conv2 = 0;
	while (ft_whitespace(((char *)str)[i]) == 0)
		i++;
	if (((char *)str)[i] == '-' || ((char *)str)[i] == '+' )
		if (((char *)str)[i++] == '-')
			sign = -sign;
	while (((char *)str)[i] <= '9' && ((char *)str)[i] >= '0')
	{
		conv = (conv * 10) + ((char *)str)[i] - 48;
		conv2 = (conv2 * 10) + ((char *)str)[i] - 48;
		i++;
	}
	if ((conv2 * sign) > 2147483647 || (conv2 * sign) < -2147483648)
		free_all_error(data);
	return (conv * sign);
}

int	ft_atol_split(char *str, t_list *data, char **split_arg)
{
	int		i;
	int		conv;
	double	conv2;
	int		sign;

	(void)data;
	conv = 0;
	i = 0;
	sign = 1;
	conv2 = 0;
	while (ft_whitespace(((char *)str)[i]) == 0)
		i++;
	if (((char *)str)[i] == '-' || ((char *)str)[i] == '+')
		if (((char *)str)[i++] == '-')
			sign = -sign;
	while (((char *)str)[i] <= '9' && ((char *)str)[i] >= '0')
	{
		conv = (conv * 10) + ((char *)str)[i] - 48;
		conv2 = (conv2 * 10) + ((char *)str)[i] - 48;
		i++;
	}
	if ((conv2 * sign) > 2147483647 || (conv2 * sign) < -2147483648)
		free_all_error_split(data, split_arg);
	return (conv * sign);
}
