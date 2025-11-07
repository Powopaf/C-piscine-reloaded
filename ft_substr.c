/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <pifourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 10:19:42 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/07 13:28:26 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	min(size_t a, size_t b)
{
	if (a < b)
	{
		return (a);
	}
	return (b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	l;

	if (start >= ft_strlen(s))
	{
		res = malloc(sizeof(char));
		if (!res)
			return (res);
		*res = '\0';
		return (res);
	}
	l = min(len, ft_strlen(s + start)) + 1;
	res = malloc(sizeof(char) * l);
	if (!res)
		return (NULL);
	i = start;
	while (i - start < l - 1)
	{
		res[i - start] = s[i];
		i++;
	}
	res[i - start] = '\0';
	return (res);
}
