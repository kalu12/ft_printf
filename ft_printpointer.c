/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:02:54 by luvuceno          #+#    #+#             */
/*   Updated: 2023/03/02 20:43:21 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printaddress(void *pointer)
{
	unsigned long	i;
	unsigned long	j;
	int				counter;

	i = (unsigned long)pointer;
	j = (unsigned long)pointer;
	if (pointer == NULL)
		return (write(STDOUT_FILENO, "0x0", 3));
	counter = write(STDOUT_FILENO, "0x", 2);
	while (i != 0)
	{
		i = i / 16;
		counter ++;
	}
	ft_putnbrhex_fd((unsigned long)pointer, 1);
	return (counter);
}
