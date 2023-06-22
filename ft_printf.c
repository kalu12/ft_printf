/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:19:56 by luvuceno          #+#    #+#             */
/*   Updated: 2023/03/02 20:47:51 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_formats(va_list args, const char format)
{
	int	print_length;

	print_length = 0;
	if (format == 'c')
		print_length += ft_printchar(va_arg(args, int));
	else if (format == 's')
		print_length += ft_prinstring(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		print_length += ft_printinteger(va_arg(args, int));
	else if (format == 'u')
		print_length += ft_printunsigned(va_arg(args, unsigned int));
	else if (format == 'x')
		print_length += ft_printhex(va_arg(args, unsigned int));
	else if (format == 'X')
		print_length += ft_printupperhex(va_arg(args, unsigned int));
	else if (format == 'p')
		print_length += ft_printaddress(va_arg(args, void *));
	else if (format == '%')
		print_length += write(STDOUT_FILENO, "%", 1);
	return (print_length);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		print_length;

	i = 0;
	print_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
			print_length += ft_formats(args, str[++i]);
		else
			print_length += write(STDOUT_FILENO, &str[i], 1);
		i++;
	}
	va_end(args);
	return (print_length);
}

// #include <stdio.h>

// int main(void)
// {
// 	char *ptr = "popp";
// 	ft_printf("\ncount: %i\n", ft_printf("%i", 4242));
// 	ft_printf("\ncount: %i\n", ft_printf("%u", 0));
// 	ft_printf("\ncount: %i\n", ft_printf("%s", "test"));
// 	ft_printf("\ncount: %i\n", ft_printf("%X", 450456));
// 	ft_printf("\ncount: %i\n", ft_printf("%p", &ptr));
// 	printf("%p", &ptr);
// 	return(0);
// }