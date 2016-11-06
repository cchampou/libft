/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 10:56:42 by cchampou          #+#    #+#             */
/*   Updated: 2016/11/06 12:06:53 by cchampou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	signe;
	int result;
	int	i;

	signe = 1;
	i = 0;
	result = 0;
	while (!ft_isdigit(str[i]) && str[i] != '\0')
	{
		if (str[i] == '-')
			signe = -1;
		if (ft_isprint(str[i]) && str[i] != '-'
				&& str[i] != '+' && str[i] != ' ')
			return (0);
		i++;
		if ((str[i] == '-' || str[i] == '+')
				&& (str[i - 1] == '-' || str[i - 1] == '+'))
			return (0);
	}
	while (ft_isdigit(str[i]) && str[i] != '\0')
	{
		result *= 10;
		result += str[i++] - '0';
	}
	return (result * signe);
}
