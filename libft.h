/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:46:55 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/15 10:47:24 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int	ft_atoi(char *str);
void	ft_bzero(void *str, size_t size);
void	*ft_calloc(size_t nmemb, size_t len);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
char	*ft_memchr(const void *src, int c, size_t len);
int	ft_memcmp(const void *s1, const void *s2, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t size);
void	*ft_memset(void *s, int c, size_t len);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *str);
unsigned int	ft_strlcat(char * dest, const char *src, size_t len);
unsigned int	ft_strlcpy(char *dest, const char *src, size_t len);
int	ft_strlen(char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t len);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char *ft_strrchr(const char *str, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int	ft_tolower(int	c);
int	ft_toupper(int	c);

#endif
