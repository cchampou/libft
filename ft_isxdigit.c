/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchampou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 17:12:52 by cchampou          #+#    #+#             */
/*   Updated: 2016/11/23 17:15:38 by cchampou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isxdigit(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 70) || (c >= 97 && c <= 102))
	{
		return (1);
	}
	return (0);
}
