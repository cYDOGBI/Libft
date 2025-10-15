/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:35:11 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/14 16:51:16 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	while (len > 0 && *s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
		len--;
	}
	if (len == 0)
		return (0);
	return (*s1 - *s2);
}
