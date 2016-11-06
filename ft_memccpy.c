/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 04:20:31 by cchampou          #+#    #+#             */
/*   Updated: 2016/11/06 04:29:37 by cchampou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t n)
{
	size_t			i;
	unsigned char	*ndst;
	unsigned char	*nsrc;

	i = 0;
	ndst = (unsigned char*)dst;
	nsrc = (unsigned char*)src;
	while (i < n)
	{
		ndst[i] = nsrc[i];
		if (nsrc[i] == c)
		{
			return (&ndst[i + 1]);
		}
		i++;
	}
	return (NULL);
}
