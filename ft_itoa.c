/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:22:51 by cchampou          #+#    #+#             */
/*   Updated: 2016/11/08 16:45:34 by cchampou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		count_digits(int nb);

char	*ft_itoa(int n)
{
	int		digits;
	long	buffer;
	char	*str;

	digits = count_digits(n);
	if (!(str = malloc(sizeof(char) * (digits + 1))))
		return (NULL);
	str[digits--] = 0;
	buffer = n;
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		buffer = -n;
	}
	while (buffer)
	{
		str[digits--] = '0' + buffer % 10;
		buffer /= 10;
	}
	return (str);
}

int		count_digits(int nb)
{
	int	digits;

	digits = 0;
	while (nb && ++digits)
		nb /= 10;
	digits = (nb <= 0) ? digits + 1 : digits;
	return (digits);
}
