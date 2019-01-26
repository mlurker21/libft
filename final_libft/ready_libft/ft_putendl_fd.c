/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlurker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 22:08:46 by mlurker           #+#    #+#             */
/*   Updated: 2018/12/04 23:00:08 by mlurker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int				i;
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	i = 0;
	if (s)
	{
		while (s1[i] != '\0')
		{
			ft_putchar_fd(s1[i], fd);
			i++;
		}
		ft_putchar_fd('\n', fd);
	}
}
