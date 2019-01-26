/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlurker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 20:39:12 by mlurker           #+#    #+#             */
/*   Updated: 2018/12/12 03:00:25 by mlurker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		len2;
	char	*s0;

	s0 = (char *)s1;
	i = 0;
	j = 0;
	len2 = ft_strlen(s2);
	if (s2[0] == '\0')
		return (s0);
	while (s0[i] != '\0')
	{
		while (s0[i + j] == s2[j])
		{
			if (j == len2 - 1)
				return (&s0[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
