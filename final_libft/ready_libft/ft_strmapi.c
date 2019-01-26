/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlurker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 16:36:19 by mlurker           #+#    #+#             */
/*   Updated: 2018/12/12 03:46:51 by mlurker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				i;
	int				len;
	char			*str;

	if (s && f)
	{
		i = 0;
		len = ft_strlen(s);
		str = (char *)malloc(sizeof(*str) * len + 1);
		if (str)
		{
			while (len--)
			{
				str[i] = f(i, *s++);
				i++;
			}
			str[i] = '\0';
			return (str);
		}
	}
	return (NULL);
}
