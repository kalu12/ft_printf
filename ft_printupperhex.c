/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printupperhex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:19:24 by luvuceno          #+#    #+#             */
/*   Updated: 2023/03/02 20:39:34 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printupperhex(unsigned int c)
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
	ft_putnbrhexx_fd(c, 1);
	return (counter);
}
