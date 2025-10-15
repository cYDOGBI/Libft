/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:52:22 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/14 16:49:15 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	char	*s1_ptr;
	char	*s2_ptr;

	s1_ptr = (char *)s1;
	s2_ptr = (char *)s2;
	while (len > 0 && *s1_ptr == *s2_ptr)
	{
		s1_ptr++;
		s2_ptr++;
		len--;
	}
	if (len == 0)
		return (0);
	return (*s1_ptr - *s2_ptr);
}
