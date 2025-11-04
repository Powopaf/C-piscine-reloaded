/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <pifourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:37:49 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/04 19:33:18 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int				ft_isalpha(unsigned char c);
int				ft_isdigit(unsigned char c);
int				ft_isalnum(unsigned char c);
int				ft_isascii(unsigned char c);
int				ft_isprint(unsigned char c);
unsigned int	ft_strlen(const char *s);
void			*ft_memset(void *s, int c, unsigned int n);
void			ft_bzero(void *s, unsigned int n);
void			*ft_memcpy(void *dest, const void *src, unsigned int n);
void			*ft_memmove(void *dest, const void *src, unsigned int n);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int dsize);
unsigned int	ft_strlcat(char *dest, const char *src, unsigned int dsize);
int				ft_toupper(int c);
int				ft_tolower(int c);

#endif
