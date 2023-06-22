/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:05:58 by luvuceno          #+#    #+#             */
/*   Updated: 2023/03/02 20:45:40 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned int c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	counter;

	i = c;
	j = c;
	counter = 0;
	if (c == 0)
		counter ++;
	while (i != 0)
	{
		i = i / 16;
		counter ++;
	}
	ft_putnbrhex_fd(c, 1);
	return (counter);
}
