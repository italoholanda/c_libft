/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 09:13:10 by igomes-h          #+#    #+#             */
/*   Updated: 2021/08/23 10:28:12 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest,	const void *src, size_t	n)
{
	int		i;
	unsigned char	*new_dest;
	unsigned char	*new_src;
	char	buffer[n];

	i = 0;
	new_dest = (unsigned char *)dest;
	new_src = (unsigned char *)src;
	while(i < n)
	{
		buffer[i] = new_src[i];
		++i;
	}
	i = 0;
	while(i < n)
	{
		new_dest[i] = buffer[i];
		++i;
	}
	return(dest);
}
