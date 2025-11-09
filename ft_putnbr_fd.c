/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <pifourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 12:36:22 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/09 13:24:12 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	c;

	num = (long)n;
	if (num < 0)
	{
		num = -num;
		write(fd, "-", 1);
	}
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
	}
	c = '0' + num % 10;
	write(fd, &c, 1);
}
