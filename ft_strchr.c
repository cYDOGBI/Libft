/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:49:28 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/14 16:50:02 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*str_ptr;

	str_ptr = (char *)str;
	while (*str_ptr || (char)c == '\0')
	{
		if (*str_ptr == c)
			return (str_ptr);
		str_ptr++;
	}

	return (NULL);
}
