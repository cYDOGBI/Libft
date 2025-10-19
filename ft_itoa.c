/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:32:54 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/20 00:29:40 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*invert_str(char *str, int len)
{
	char	temp;
	int		j;

	j = 0;
	temp = str[j];
	while (j < len / 2)
	{
		str[j] = str[len - j - 1];
		str[len - j - 1] = temp;
		j++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	int		d;
	char	*str;

	str = malloc(sizeof(char *) + n);
	if (!str)
		return (NULL);
	i = 0;
	d = n;
	while (d > 0)
	{
		str[i] = (d % 10) + '0';
		d /= 10;
		i++;
	}
	invert_str(str, i);
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	printf("%s\n", ft_itoa(13));
	return (0);
}
