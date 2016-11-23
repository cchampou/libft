/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 15:30:53 by cchampou          #+#    #+#             */
/*   Updated: 2016/11/23 15:39:31 by cchampou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_is_lowercase(char *s)
{
	while (*s)
	{
		if (!(ft_islower(*s++)))
			return (0);
	}
	return (1);
}