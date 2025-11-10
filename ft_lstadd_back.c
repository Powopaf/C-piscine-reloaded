/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:36:33 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/10 13:10:07 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*c;

	if (!lst || !new)
	{
		return ;
	}
	c = *lst;
	if (c == NULL)
	{
		*lst = new;
		return ;
	}
	while (c->next != NULL)
	{
		c = c->next;
	}
	c->next = new;
}
