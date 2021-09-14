/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 11:50:52 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/14 12:20:54 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*address;
	char	char_c;

	char_c = (unsigned char)c;
	if (char_c == 0)
		return ((char *)s + ft_strlen(s));
	address = 0;
	str = (char *)s;
	while (*str)
	{
		if (*str == char_c)
			address = str;
		str++;
	}
	return (address);
}
