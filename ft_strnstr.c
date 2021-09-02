/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 17:39:51 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/02 16:56:02 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	i = 0;
	little_len = ft_strlen(little);
	if (!*little || !*big || (*big == *little))
		return ((char *)big);
	while (len && (*big && i < len))
	{
		if (ft_strncmp((char *)big, (char *)little, little_len) == 0)
		{
			return ((char *)big);
		}
		big++;
		i++;
		if (i + little_len > len)
			return (NULL);
	}
	return (NULL);
}
