/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:22:51 by cchampou          #+#    #+#             */
/*   Updated: 2017/06/10 15:22:02 by cchampou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_digits(intmax_t nb)
{
	int	digits;

	digits = 0;
	while (nb && ++digits)
		nb /= 10;
	digits = (nb != 0) ? digits + 1 : digits;
	return (digits);
}

char		*ft_imtoa(intmax_t n)
{
	int				digits;
	char			*str;

	digits = (n <= 0) ? count_digits(-n) + 1 : count_digits(n);
	if (!(str = malloc(sizeof(char) * (digits + 1))))
		return (NULL);
	if (n < 0)
		str[0] = '-';
	str[digits--] = '\0';
	if (n == 0)
		str[0] = '0';
	while (n)
	{
		if (n < 0)
		{
			str[digits--] = '0' - n % 10;
			n /= 10;
			n = -n;
		}
		else
		{
			str[digits--] = '0' + n % 10;
			n /= 10;
		}
	}
	return (str);
}
