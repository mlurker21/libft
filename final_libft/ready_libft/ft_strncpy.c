/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlurker <mlurker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 20:06:39 by mlurker           #+#    #+#             */
/*   Updated: 2018/11/29 17:30:41 by mlurker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	int i;

	i = 0;
	while (i < (int)len && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < (int)len)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
