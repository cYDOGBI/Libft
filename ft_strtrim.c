/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:15:02 by tlaranje          #+#    #+#             */
/*   Updated: 2025/10/20 16:59:56 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		s;

	str = (char *)s1;
	i = 0;
	s = 0;
	while (str[i])
	{
		while (str[i] == set[s])
		{
			printf("1");
			i++;
			s++;
		}

		i++;
	}
	return (NULL);
}

int	main(void)
{
	char *str = ft_strtrim("Hello, World!", "He");
	printf("\nft_strtrim(\"Hello, World!\", \",\") = %s\n", str);
	return (0);
}
