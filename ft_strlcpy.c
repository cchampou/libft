/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 16:24:34 by cchampou          #+#    #+#             */
/*   Updated: 2016/11/23 16:37:06 by cchampou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	
	size_t	length;

	length = ft_strlen(src);
	while (size > 1 && *src)
	{
		*dst++ = *src++;
		size--;
	}
	if (size >= 1)
		*dst = 0;
	return (length);
}
