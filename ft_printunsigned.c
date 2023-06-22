/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:44:30 by luvuceno          #+#    #+#             */
/*   Updated: 2023/03/02 20:41:17 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsigned(unsigned int c)
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
		i = i / 10;
		counter ++;
	}
	ft_putnbrunsigned_fd(c, 1);
	return (counter);
}
