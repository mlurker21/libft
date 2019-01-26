/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlurker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 15:30:56 by mlurker           #+#    #+#             */
/*   Updated: 2018/12/12 03:43:21 by mlurker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	i = 0;
	if (s1 && s2)
	{
		str = (char *)malloc(sizeof(char) * ft_strlen(s1)
			+ ft_strlen(s2) + 1);
		if (!str)
			return (NULL);
		while (*s1 != '\0')
			str[i++] = *s1++;
		while (*s2 != '\0')
			str[i++] = *s2++;
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
