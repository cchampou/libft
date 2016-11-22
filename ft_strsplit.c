/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 15:54:28 by cchampou          #+#    #+#             */
/*   Updated: 2016/11/22 19:24:52 by cchampou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_strsplit(char const *s, char c)
{
	char	**table;
	int		param[4];

	CPT = 0;
	SPACE = 1;
	WORDS = 0;
	while (s[CPT])
	{
		WORDS = (s[CPT] != c && SPACE) ? WORDS + 1 : WORDS;
		SPACE = ((s[CPT++] == c) ? 1 : 0);
	}
	if (!(table = (char**)malloc(sizeof(table) * (WORDS + 1))))
		return (NULL);
	table[WORDS] = NULL;
	while (CPT-- >= 0)
	{
		if (s[CPT] != c)
		{
			LENGTH = CPT;
			while (s[CPT] != c && CPT != -1)
				--CPT;
			table[--WORDS] = ft_strsub(s, CPT + 1, LENGTH - CPT);
		}
	}
	return (table);
}
