/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:03:11 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/09 10:01:16 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	breaker_ctr(char const *str, char breaker)
{
	unsigned int	s_len;
	unsigned int	b_len;
	int				is_valid;

	s_len = 0;
	b_len = 0;
	is_valid = 0;
	while (str[s_len])
	{
		if (str[s_len] == breaker && is_valid)
		{
			is_valid = 0;
			b_len++;
		}
		else
			is_valid = 1;
		s_len++;
	}
	if (str[s_len] == breaker)
		b_len--;
	return (b_len);
}

char	**ft_split(char const *s, char c)
{
	char			**table;
	unsigned int	i;
	unsigned int	j;
	unsigned int	a;

	table = (char **) ft_calloc(breaker_ctr(s, c) + 1, sizeof(char *));
	i = 0;
	a = -1;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			j = 0;
			while (s[i] != c && s[i])
			{
				i++;
				j++;
			}
			table[++a] = (char *) ft_calloc(j + 1, sizeof(char));
			ft_strlcpy(table[a], &s[i - j], j + 1);
		}
	}
	return (table);
}
