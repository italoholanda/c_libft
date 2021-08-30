/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 11:50:52 by igomes-h          #+#    #+#             */
/*   Updated: 2021/08/30 12:54:23 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*address;

	address = 0;
	str = (char *)s;
	while (*str)
	{
		if (*str == c)
			address = str;
		++str;
	}
	return (address);
}
