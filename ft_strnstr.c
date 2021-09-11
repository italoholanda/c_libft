/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 17:39:51 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/11 10:46:37 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	if (!*little || !*big || (*big == *little))
		return ((char *)big);
	i = 0;
	little_len = ft_strlen(little);
	while (len && (*big && i < len))
	{
		if (ft_strncmp((char *)big, (char *)little, little_len) == 0)
		{
			return ((char *)big);
		}
		big++;
		i++;
		if (i + little_len > len)
			return (0);
	}
	return (0);
}
