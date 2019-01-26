/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlurker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 17:24:06 by mlurker           #+#    #+#             */
/*   Updated: 2018/12/11 22:45:23 by mlurker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_word(const char *s, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			word++;
		i++;
	}
	return (word);
}

static	char	**ft_split(char **new, const char *s, char c, size_t word)
{
	int		i;
	int		lett;

	i = 0;
	lett = 0;
	while (word--)
	{
		while (*s == c || *s == '\0')
			s++;
		while (*s != c && *s != '\0')
		{
			lett++;
			s++;
		}
		if (lett)
		{
			s -= lett;
			if (!(new[i++] = ft_strsub(s, 0, lett)))
				return (NULL);
			s += lett;
			lett = 0;
		}
	}
	new[i] = NULL;
	return (new);
}

char			**ft_strsplit(const char *s, char c)
{
	int		i;
	size_t	word;
	size_t	lett;
	char	**new;

	lett = 0;
	i = 0;
	if (!s)
		return (NULL);
	word = ft_word(s, c);
	if (!(new = (char **)malloc(sizeof(new) * word + 1)))
		return (NULL);
	ft_split(new, s, c, word);
	return (new);
}
