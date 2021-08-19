/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:00:16 by igomes-h          #+#    #+#             */
/*   Updated: 2021/08/19 11:03:33 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

void 	ft_bzero(void *mem, size_t n);
int		ft_isalnum(char *str);
int		ft_isalpha(char *str);
int		ft_isascii(int nbr);
int		ft_isdigit(char *input);
void	*ft_memset(void *mem, int byte, size_t len);
int		ft_strlen(char *str);

#endif
