/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 07:39:01 by cchampou          #+#    #+#             */
/*   Updated: 2016/11/06 08:19:17 by cchampou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char*)s;
	while (s[i] != (char)c && s[i] != '\0')
	{
		i++;
	}
	if (c == '\0' && s[i] == '\0')
	{
		return (&ptr[i]);
	}
	return ((s[i] == '\0') ? NULL : &ptr[i]);
}
