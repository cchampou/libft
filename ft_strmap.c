/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 13:49:14 by cchampou          #+#    #+#             */
/*   Updated: 2016/11/06 14:10:58 by cchampou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f) (char))
{
	size_t	length;
	size_t	i;
	char	*out;

	i = 0;
	length = (size_t)ft_strlen((char*)s);
	out = (char*)malloc(length * sizeof(out));
	if (out && s)
	{
		while (s[i] != 0)
		{
			out[i] = f(s[i]);
			i++;
		}
		return (out);
	}
	return (NULL);
}
