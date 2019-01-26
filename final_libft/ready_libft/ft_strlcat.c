/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlurker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 00:43:43 by mlurker           #+#    #+#             */
/*   Updated: 2018/12/12 00:53:07 by mlurker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t lens;
	size_t lend;

	lend = ft_min(size, ft_strlen((const char *)dst));
	lens = ft_strlen(src);
	if (lend == size)
		return (size + lens);
	if (lens < size - lend)
		ft_strncat(dst, (char *)src, lens + 1);
	else
	{
		ft_strncat(dst, (char *)src, size - lend - 1);
		dst[size - 1] = '\0';
	}
	return (lend + lens);
}
