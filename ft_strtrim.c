/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:29:49 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/07 14:37:56 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	is_inside(char const *set, char a)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0' && set[i] != a)
	{
		i++;
	}
	return (set[i] == a);
}

void	copy(size_t i, size_t j, char *res, char const *s1)
{
	size_t	k;

	k = 0;
	while (i <= j)
	{
		res[k] = s1[i];
		i++;
		k++;
	}
	res[k] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*res;

	if (*s1 == '\0')
	{
		res = malloc(sizeof(char));
		if (!res)
			return (NULL);
		*res = '\0';
		return (res);
	}
	i = 0;
	while (s1[i] != '\0' && is_inside(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (j >= i && is_inside(set, s1[j]))
		j--;
	res = malloc(sizeof(char) * (j - i + 2));
	if (!res)
		return (NULL);
	copy(i, j, res, s1);
	return (res);
}
