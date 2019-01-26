/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlurker <mlurker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 09:48:17 by mlurker           #+#    #+#             */
/*   Updated: 2018/12/04 16:07:18 by mlurker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *s1;
	unsigned char *s2;

	s2 = (unsigned char *)src;
	s1 = (unsigned char *)dst;
	while (n--)
	{
		if (*s2 == (unsigned char)c)
		{
			*s1 = *s2;
			return (s1 + 1);
		}
		*s1 = *s2;
		s1++;
		s2++;
	}
	return (0);
}
