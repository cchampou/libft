/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 15:04:50 by cchampou          #+#    #+#             */
/*   Updated: 2016/11/06 15:12:35 by cchampou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		length;
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	length = ft_strlen(s1) + ft_strlen(s2);
	str = (char*)malloc(length * sizeof(str));
	if (str)
	{
		while (s1[i] != 0)
		{
			str[i] = s1[i];
			i++;
		}
		while (s2[j] != 0)
		{
			str[i++] = s2[j++];
		}
		str[i] = 0;
		return (str);
	}
	return (NULL);
}
