/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:24:14 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/14 16:49:36 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char	*src_ptr;
	char	*dest_ptr;

	src_ptr = (char *)src;
	dest_ptr = (char *)dest;
	while (len--)
		*dest_ptr++ = *src_ptr++;
	return (dest_ptr);
}
