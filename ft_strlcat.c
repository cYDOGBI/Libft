/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:19:04 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/14 16:50:37 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char * dest, const char *src, size_t len)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = 0;
	src_len = 0;
	i = 0;
	while(dest[dest_len])
		dest_len++;
	while(src[src_len])
		src_len++;
	while (src[i] && (dest_len + 1 < len - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
