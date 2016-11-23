/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 14:37:52 by cchampou          #+#    #+#             */
/*   Updated: 2016/11/23 18:32:11 by cchampou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	length;
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	length = (size_t)ft_strlen(s1);
	if (length != (size_t)ft_strlen(s2))
		return (0);
	while (i < length && i < n)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}
