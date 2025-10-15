/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:49:31 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/15 16:56:21 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	*ft_strdup(const char *str)
{
	char	*dest;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (str[len])
		len++;
	dest = malloc((len * sizeof(char)) + 1);
	if (!dest)
		return (NULL);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
} */

char	*ft_strdup(const char *str)
{
	const char	*dest;
	int			len;

	len = 0;
	while (str[len])
		len++;
	dest = malloc((len * sizeof(char)) + 1);
	if (!dest)
		return (NULL);
	while (str)
	{
		dest = str;
		dest++;
		str++;
	}
	dest = '\0';
	return((char *)dest);
}
