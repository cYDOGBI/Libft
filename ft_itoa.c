/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:32:54 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/17 17:26:27 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;

	str = malloc(sizeof(char) * n);
	if (!str)
		return (NULL);
	if (n < 0)
		n = -n;
	int temp = n;
	int divisor = 1;
	while (temp >= 10) {
		temp /= 10;
		divisor *= 10;
	}
	printf("%d", divisor);
	return (str);
}
