/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:22:55 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/14 16:47:38 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t len)
{
	int	*array;

	if (nmemb == 0 || len == 0)
		return (NULL);
	array = malloc(nmemb * len);
	ft_memset(array, 0, nmemb * len);
	return(array);
}
