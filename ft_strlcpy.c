/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:36:25 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/14 16:50:43 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t		src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	while (*src && src_len < len - 1)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (src_len);
}
