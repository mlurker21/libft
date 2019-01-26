/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlurker <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 18:12:52 by mlurker           #+#    #+#             */
/*   Updated: 2018/12/11 23:55:23 by mlurker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*temp;
	t_list	*new;

	if (lst)
	{
		temp = f(lst);
		if (temp == NULL)
			return (NULL);
		new = temp;
		while (lst->next)
		{
			lst = lst->next;
			new->next = f(lst);
			if (new->next == NULL)
				return (NULL);
			new = new->next;
		}
		return (temp);
	}
	return (NULL);
}
