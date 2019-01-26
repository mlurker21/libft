/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlurker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:22:40 by mlurker           #+#    #+#             */
/*   Updated: 2018/12/11 17:49:26 by mlurker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		len;

	str = (char *)s;
	len = ft_strlen(str) - 1;
	if (c == '\0')
		return (&str[len + 1]);
	if (str[len] == c)
		return (&str[len]);
	if (str[len] != '\0')
		while (len--)
		{
			if (str[len] == c)
				return (&str[len]);
		}
	return (NULL);
}
