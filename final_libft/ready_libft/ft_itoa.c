/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlurker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 15:21:54 by mlurker           #+#    #+#             */
/*   Updated: 2018/12/11 19:19:07 by mlurker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_itoa_p(char *s, long long int n1, int len)
{
	s[len--] = '\0';
	while (n1 != 0)
	{
		s[len] = n1 % 10 + '0';
		n1 /= 10;
		len--;
	}
	return (s);
}

char		*ft_itoa(int n)
{
	int				sign;
	char			*s;
	int				len;
	long long int	n1;

	sign = 1;
	len = 1;
	n1 = (long long)n;
	if (n < 0)
	{
		len++;
		sign = -1;
		n1 *= -1;
	}
	while (n /= 10)
		len++;
	s = (char *)malloc(sizeof(*s) * len + 1);
	if (!s)
		return (0);
	if (n == 0)
		s[0] = '0';
	s = ft_itoa_p(s, n1, len);
	if (sign < 0)
		s[0] = '-';
	return (s);
}
