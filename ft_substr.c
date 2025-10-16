/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:48:31 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/16 10:30:50 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	str_len;

	i = 0;
	str_len = 0;
	while (str[str_len])
		str_len++;
	if (start >= str_len)
		return (NULL);
	if (start + len > str_len)
		len = str_len - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	while (i < len)
	{
		substr[i] = str[start + i];
		i++;
	}
	substr[i] = '\0';
	return(substr);
}
