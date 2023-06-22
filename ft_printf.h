/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:29:43 by luvuceno          #+#    #+#             */
/*   Updated: 2023/03/02 20:46:48 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printchar(int c);
int		ft_prinstring(char *str);
int		ft_printinteger(int c);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbrunsigned_fd(unsigned int n, int fd);
int		ft_printunsigned(unsigned int c);
int		ft_printhex(unsigned int c);
void	ft_putnbrhex_fd(unsigned long n, int fd);
void	ft_putnbrhexx_fd(unsigned int n, int fd);
int		ft_printupperhex(unsigned int c);
int		ft_printaddress(void *pointer);
int		ft_printf(const char *str, ...);

#endif