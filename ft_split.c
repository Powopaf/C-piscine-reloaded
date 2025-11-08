/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:59:51 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/08 11:15:56 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char a, char c)
{
	return (c == a);
}

static size_t	len(char const *str, char c, int i)
{
	size_t	l;

	l = 0;
	while (str[i + l] != '\0' && !is_charset(str[i + l], c))
	{
		l++;
	}
	return (l);
}

static int	count_word(char const *str, char c)
{
	int	i;
	int	res;

	i = 1;
	res = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_charset(str[i], c))
		{
			i++;
		}
		if (str[i] == '\0')
		{
			break;
		}
		res++;
		while (str[i] != '\0' && !is_charset(str[i], c))
		{
			i++;
		}
	}
	return (res);
}

static int	copy(char **res, char const *str, char c, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (i < size && str[j] != '\0')
	{
		k = 0;
		if (str[j] != '\0' && is_charset(str[j], c))
		{
			j++;
			continue ;
		}
		res[i] = malloc(sizeof(char) * (len(str, c, j) + 1));
		if (!res[i])
		{
			while (--i >= 0)
				free(res[i]);
			return (0);
		}
		while (str[j] != '\0' && !is_charset(str[j], c))
		{
			res[i][k] = str[j];
			k++;
			j++;
		}
		res[i][k] = '\0';
		i++;
	}
	return (1);
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
	if (!copy(res, s, c, size))
	{
		free(res);
		return (NULL);
	}
	res[size] = NULL;
	return (res);
}
