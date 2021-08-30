/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 09:54:43 by igomes-h          #+#    #+#             */
/*   Updated: 2021/08/25 17:22:53 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = 0;
	return (ft_strlen(dst));
}