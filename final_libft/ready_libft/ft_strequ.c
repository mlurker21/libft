/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlurker <mlurker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 14:45:08 by mlurker           #+#    #+#             */
/*   Updated: 2018/12/03 14:57:46 by mlurker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	if (s11 && s22)
	{
		while (*s11 == *s22 && *s11 != '\0')
		{
			s11++;
			s22++;
		}
		if (*s11 == '\0' && *s22 == '\0')
			return (1);
	}
	return (0);
}
