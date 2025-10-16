/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:15:02 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/16 15:13:07 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	l;
	size_t	s1_len;

	i = 0;
	j = 0;
	l = 0;
	s1_len = ft_strlen(s1);
	str = malloc (s1_len + 2);
	ft_strlcpy(str, s1, s1_len + 1);
	while (str[i])
	{
		if (str[i] == set[j])
		{
			l = i;
			while (str[l])
			{
				str[l] = str[l + 1];
				l++;
			}
			j++;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
