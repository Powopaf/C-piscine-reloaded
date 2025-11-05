/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <pifourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:48:40 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/05 11:45:32 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	if (*needle == '\0')
		return ((char *)(haystack));
	i = 0;
	while (haystack[i] != '\0' && i < n)
	{
		if (haystack[i] == *needle)
		{
			j = 0;
			while (haystack[i + j] != '\0' && needle[j] != '\0'
				&& i + j < n && haystack[i + j] == needle[j])
			{
				j++;
			}
			if (needle[j] == '\0')
			{
				return ((char *)(haystack + i));
			}
		}
		i++;
	}
	return (0);
}
