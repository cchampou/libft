/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 14:41:05 by cchampou          #+#    #+#             */
/*   Updated: 2016/11/08 16:10:13 by cchampou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s1, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if(!(str = (char*)malloc(sizeof(char) * (len + 1))) || !s1)
		return (NULL);
	while (i < len)
	{
		str[i] = s1[i + start];
		i++;
	}
	str[i] = '\0';
	return ((!str) ? NULL : str);
}
