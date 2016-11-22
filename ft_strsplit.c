/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 15:54:28 by cchampou          #+#    #+#             */
/*   Updated: 2016/11/22 10:00:03 by cchampou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_strsplit(char const *s, char c)
{
	char	**table;
	int		words;
	int		space;
	int		i;
	int		length;

	i = 0;
	space = 1;
	words = 0;
	while (s[i])
	{
		words = (s[i] != c && space) ? words + 1 : words;
		space = ((s[i++] == c && c != ' ') ? 1 : 0);
	}
	if (!(table = (char**)malloc(sizeof(table) * (words + 1))))
		return (NULL);
	table[words] = 0;
	while (i-- >= 0 && s[i] != c)
	{
		length = i;
		while (s[i] != c && i > -1)
			i--;
		table[--words] = ft_strsub(s, i + 1, length - i);
	}
	return (table);
}
