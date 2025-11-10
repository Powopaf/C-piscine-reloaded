/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:01:06 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/10 13:36:32 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*c;
	t_list	*p;
	void	*v;

	if (!f || !del)
		return (NULL);
	c = lst;
	res = NULL;
	while (c != NULL)
	{
		v = f(c->content);
		p = ft_lstnew(v);
		if (p == NULL)
		{
			del(v);
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, p);
		c = c->next;
	}
	return (res);
}
