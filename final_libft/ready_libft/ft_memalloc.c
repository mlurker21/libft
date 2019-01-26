/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlurker <mlurker@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 15:07:21 by mlurker           #+#    #+#             */
/*   Updated: 2018/12/03 17:00:08 by mlurker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	int		*s;
	void	*v;

	v = (void *)malloc(size);
	if (v)
	{
		s = (int *)v;
		while (size--)
			*s++ = 0;
		return (v);
	}
	return (NULL);
}
