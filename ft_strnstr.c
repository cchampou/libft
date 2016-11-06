/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 09:50:08 by cchampou          #+#    #+#             */
/*   Updated: 2016/11/06 10:33:24 by cchampou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(little) == 0)
	{
		return ((char*)big);
	}
	while (big[i] != '\0')
	{
		while (big[i++] == little[j++])
		{
			if ((j == (int)ft_strlen(little) || j == (int)len)
					&& i <= (int)len)
			{
				return (&((char*)big)[i - j]);
			}
		}
		j = 0;
		i++;
	}
	return (NULL);
}
