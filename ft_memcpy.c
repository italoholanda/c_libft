/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:47:48 by igomes-h          #+#    #+#             */
/*   Updated: 2021/08/19 18:08:23 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*new_dest;
	char	*new_src;

	i = 0;
	new_dest = (unsigned char *)dest;
	new_src = (unsigned char *)src;
	while(i < n)
	{
		new_dest[i] = new_src[i];
		++i;
	}
	return(dest);
}
