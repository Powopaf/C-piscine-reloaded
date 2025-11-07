/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:59:51 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/07 15:04:23 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char a, char c)
{
	return (c == a);
}

static int	len(char const *str, char c, int i)
{
	int	len;
	int	j;

	len = 0;
	j = 0;
	while (str[i] != '\0' && !is_charset(str[i], c))
	{
		i++;
	}
	return (i);
}

static int	count_word(char const *str, char c)
{
	int	i;
	int	res;
	int	s;

	i = 1;
	res = 0;
	s = 0;
	while (str[i] != '\0')
	{
		if (is_charset(str[i], c) && !is_charset(str[i - 1], c))
		{
			res++;
		}
		if (!is_charset(str[i], c))
		{
			s = 1;
		}
		i++;
	}
	if (!is_charset(str[i - 1], c))
		res++;
	return (res * s);
}

static void	copy(char **res, char const *str, char c, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (i < size - 1 && str[j] != '\0')
	{
		k = 0;
		if (str[j] != '\0' && is_charset(str[j], c))
		{
			j++;
			continue ;
		}
		res[i] = malloc(sizeof(char) * len(str, c, j) + 1);
		while (str[j] != '\0' && !is_charset(str[j], c))
		{
			res[i][k] = str[j];
			k++;
			j++;
		}
		res[i][k] = '\0';
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		size;

	if (s == 0)
	{
		return (NULL);
	}
	size = count_word(s, c);
	res = malloc(sizeof(char *) * (size + 1));
	if (!res)
		return (res);
	copy(res, s, c, size + 1);
	res[size + 1] = NULL;
	return (res);
}
