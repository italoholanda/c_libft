/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 17:39:51 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/01 11:28:04 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

char	*ft_strnstr(const char *big_s, const char *short_s, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	short_len;
	char	*new_big;

	i = 0;
	new_big = (char *)big_s;
	short_len = ft_strlen(short_s);
	if (short_len || big_s == short_s)
		return (new_big);
	while (new_big[i] && i < len)
	{
		j = 0;
		while (new_big[i + j] && short_s[j]
			&& new_big[i + j] == short_s[j] && i + j < len)
			++j;
		if (j == short_len)
			return (new_big + i);
		++i;
	}
	return (0);
}
