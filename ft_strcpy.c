/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 01:31:01 by cchampou          #+#    #+#             */
/*   Updated: 2016/11/06 02:15:38 by cchampou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int	srclen;
	int	dstlen;
	int	i;

	i = 0;
	srclen = ft_strlen(src) + 1;
	dstlen = ft_strlen(dst) + 1;
	while (i <= dstlen && i < srclen)
	{
		if (i < srclen)
		{
			dst[i] = src[i];
		}
		i++;
	}
	return (dst);
}
