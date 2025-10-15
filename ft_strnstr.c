/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:28:30 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/14 16:51:29 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*b_ptr;
	const char	*l_ptr;
	size_t		len_ptr;

	if (!*little)
		return (char *)big;
	while (*big && len)
	{
		b_ptr = big;
		l_ptr = little;
		len_ptr = len;
		while (*b_ptr && *l_ptr && *b_ptr == *l_ptr && len_ptr)
		{
			b_ptr++;
			l_ptr++;
			len_ptr--;
		}
		if (!*l_ptr)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
