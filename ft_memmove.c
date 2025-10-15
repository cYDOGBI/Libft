/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:00:53 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/14 16:49:45 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char	*src_ptr;
	char	*dest_ptr;

	src_ptr = (char *)src;
	dest_ptr = (char *)dest;
	if (dest_ptr < src_ptr)
	{
		while (size--)
			*dest_ptr++ = *src_ptr++;
	}
	else
	{
		dest_ptr += size;
		src_ptr += size;
		while (size--)
			*--dest_ptr = *--src_ptr;
	}
	return (dest_ptr);
}
