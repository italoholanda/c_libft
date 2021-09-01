/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 10:10:35 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/01 15:24:00 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t indexes, size_t index_size)
{
	void	*ptr;

	if (!indexes || !index_size)
		return (0);
	ptr = malloc(indexes * index_size);
	ft_bzero(ptr, indexes * index_size);
	return (ptr);
}
