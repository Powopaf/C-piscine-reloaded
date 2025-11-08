/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <pifourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 15:52:41 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/08 16:13:37 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*first;

	i = 0;
	first = malloc(ft_strlen(s) + 1);
	if (!first)
		return (NULL);
	while (s[i] != '\0')
	{
		first[i] = f((unsigned int)i, s[i]);
		i++;
	}
	first[i] = '\0';
	return (first);
}
