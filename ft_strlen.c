/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 10:59:52 by igomes-h          #+#    #+#             */
/*   Updated: 2021/08/19 17:01:53 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	iterator;

	iterator = 0;
	while (str[iterator])
		iterator++;
	return (iterator);
}
