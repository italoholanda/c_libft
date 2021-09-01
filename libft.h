/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:00:16 by igomes-h          #+#    #+#             */
/*   Updated: 2021/09/01 15:27:19 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

// (IS) FUNCTIONS
int		ft_iprint(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
// (TO) FUNCTIONS
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(char *str);
// (STR) FUNCTIONS
char	*ft_strdup(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big_s, const char *short_s, size_t len);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
// (MEM) FUNCTIONS
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_bzero(void *mem, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memset(void *mem, int byte, size_t len);
void	*ft_calloc(size_t indexes, size_t index_size);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest,	const void *src, size_t	n);

#endif
