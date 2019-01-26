/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlurker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 17:43:09 by mlurker           #+#    #+#             */
/*   Updated: 2018/12/12 03:46:42 by mlurker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		len;
	char	*str;

	if (s && f)
	{
		i = 0;
		len = ft_strlen(s);
		str = (char *)malloc(sizeof(*str) * len + 1);
		if (str)
		{
			while (len--)
				str[i++] = f(*s++);
			str[i] = '\0';
			return (str);
		}
	}
	return (NULL);
}
