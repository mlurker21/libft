/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlurker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 14:22:31 by mlurker           #+#    #+#             */
/*   Updated: 2018/12/12 03:47:12 by mlurker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*sub;
	int		i;

	i = 0;
	str = (char *)s;
	sub = (char *)malloc(sizeof(unsigned char) * len + 1);
	if (sub && s)
	{
		while (len--)
			sub[i++] = str[start++];
		sub[i] = '\0';
		return (sub);
	}
	return (NULL);
}
