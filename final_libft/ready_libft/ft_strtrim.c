/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlurker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 23:21:41 by mlurker           #+#    #+#             */
/*   Updated: 2018/12/12 02:46:36 by mlurker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(const char *s)
{
	const char		*len;

	if (s)
	{
		while (*s == ' ' || *s == '\n' || *s == '\t')
			s++;
		if (!*s)
			return (ft_strdup(""));
		len = ft_strchr(s, '\0') - 1;
		while (*len == ' ' || *len == '\n' || *len == '\t')
			len--;
		return (ft_strsub(s, 0, len - s + 1));
	}
	return (NULL);
}
