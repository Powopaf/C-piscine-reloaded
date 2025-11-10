/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:34:15 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/10 13:39:58 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*c;

	c = lst;
	if (c == NULL)
	{
		return (NULL);
	}
	while (c->next != NULL)
	{
		c = c->next;
	}
	return (c);
}
