/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 22:39:54 by cchampou          #+#    #+#             */
/*   Updated: 2016/11/06 01:20:33 by cchampou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = 0;
	while (src[j] != '\0' && j < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (i < size - 1)
	{
		dst[i] = '\0';
		return (i);
	}
	else
	{
		dst[j] = '\0';
		return (i + j - 2);
	}
}
