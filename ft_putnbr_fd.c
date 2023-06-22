/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:10:25 by luvuceno          #+#    #+#             */
/*   Updated: 2023/03/02 20:37:07 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		ft_putchar_fd((n + 48), fd);
	}
}

void	ft_putnbrunsigned_fd(unsigned int n, int fd)
{
	if (n > 9)
	{
		ft_putnbrunsigned_fd(n / 10, fd);
		ft_putnbrunsigned_fd(n % 10, fd);
	}
	else
	{
		ft_putchar_fd((n + 48), fd);
	}
}

void	ft_putnbrhex_fd(unsigned long n, int fd)
{
	if (n > 15)
	{
		ft_putnbrhex_fd(n / 16, fd);
		ft_putnbrhex_fd(n % 16, fd);
	}
	else
	{
		write(STDOUT_FILENO, &"0123456789abcdef"[n], 1);
	}
}

void	ft_putnbrhexx_fd(unsigned int n, int fd)
{
	if (n > 15)
	{
		ft_putnbrhexx_fd(n / 16, fd);
		ft_putnbrhexx_fd(n % 16, fd);
	}
	else
	{
		write(STDOUT_FILENO, &"0123456789ABCDEF"[n], 1);
	}
}
