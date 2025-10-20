/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:32:54 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/20 15:20:09 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*reverse_str(char *str, int len)
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

static int	int_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	add_to_string(char *str, long num, int *i)
{
	if (num == 0)
		str[(*i)++] = '0';
	while (num > 0)
	{
		str[*i] = (num % 10) + '0';
		num /= 10;
		(*i)++;
	}
}

char	*ft_itoa(int n)
{
	int			i;
	long int	num;
	char		*str;

	num = n;
	i = 0;
	str = malloc(sizeof(char) * (int_len(n) + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		num = -num;
		str[i++] = '-';
	}
	add_to_string(str, num, &i);
	if (str[0] == '-')
		reverse_str(str + 1, i - 1);
	else
		reverse_str(str, i);
	str[i] = '\0';
	return (str);
}
