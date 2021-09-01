/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 21:41:25 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/01 20:11:14 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if ((c == '\n')
		|| (c == '\t')
		|| (c == '\v')
		|| (c == '\f')
		|| (c == '\r')
		|| (c == ' '))
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	signal;
	int	response;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	signal = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	response = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		response = (str[i] - '0') + (response * 10);
		i++;
	}
	return (response * signal);
}
