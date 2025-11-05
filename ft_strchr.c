/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <pifourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 19:41:58 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/05 19:34:09 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && (unsigned char)s[i] != (unsigned char)c)
	{
		i++;
	}
	if ((unsigned char)s[i] == (unsigned char)c)
	{
		return ((char *)(s + i));
	}
	return (NULL);
}
