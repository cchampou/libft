/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:22:51 by cchampou          #+#    #+#             */
/*   Updated: 2016/11/06 16:50:11 by cchampou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	int		digits;
	int		buffer;
	char	*str;

	digits = 0;
	buffer = n;
	while (buffer && ++digits)
		buffer /= 10;
	buffer = (n < 0 && n != -2147483648) ? -n : n;
	digits = (n <= 0) ? digits + 1 : digits;
	if (!(str = malloc(sizeof(char) * (digits + 1))))
		return (NULL);
	if (n == -2147483648)
		return ("-2147483648");
	str[digits--] = 0;
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	while (buffer)
	{
		str[digits--] = '0' + buffer % 10;
		buffer /= 10;
	}
	return (str);
}
