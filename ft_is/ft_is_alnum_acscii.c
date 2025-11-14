/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_alnum_acscii.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlaranje <tlaranje@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:30:33 by tlaranje          #+#    #+#             */
/*   Updated: 2025/11/14 15:17:03 by tlaranje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((ft_isalpha(c) || ft_isdigit(c)));
}

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
