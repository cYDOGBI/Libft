/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:28:50 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/20 11:34:48 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *src, int c, size_t len)
{
	char	*src_ptr;

	src_ptr = (char *)src;
	while (len--)
	{
		if (*src_ptr == c)
			return ((char *)src_ptr);
		src_ptr++;
	}
	return (NULL);
}
