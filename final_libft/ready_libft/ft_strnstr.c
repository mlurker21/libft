/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlurker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 19:22:57 by mlurker           #+#    #+#             */
/*   Updated: 2018/12/12 02:15:52 by mlurker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *h, const char *n, size_t len)
{
	char		*h1;
	size_t		len1;

	len1 = ft_strlen((char *)n);
	h1 = (char *)h;
	if (n[0] == '\0')
		return ((char *)h);
	while (*h != '\0' && len1 <= len--)
	{
		if (*h == *n && ft_memcmp(h, n, len1) == 0)
			return ((char *)h);
		h++;
	}
	return (NULL);
}
