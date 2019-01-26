/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlurker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 14:51:47 by mlurker           #+#    #+#             */
/*   Updated: 2018/12/11 22:46:01 by mlurker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	if (s11 && s22)
	{
		while (*s11 == *s22 && *s11 && *s22 && n--)
		{
			s11++;
			s22++;
		}
		if (*s11 == *s22 || n == 0)
			return (1);
	}
	return (0);
}
