/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 10:42:24 by igomes-h          #+#    #+#             */
/*   Updated: 2021/08/30 11:33:43 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dst);
	j = 0;
	while(src[j] && j < size)
	{
		dst[i+j] = src[i];
		j++;
	}
	return (ft_strlen(src) + (i+j));
}
