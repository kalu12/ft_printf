/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printinteger.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:52:43 by luvuceno          #+#    #+#             */
/*   Updated: 2023/03/02 20:44:17 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printinteger(int c)
{
	int	i;
	int	j;
	int	counter;

	i = c;
	j = c;
	counter = 0;
	if (c <= 0)
		counter ++;
	while (i != 0)
	{
		i = i / 10;
		counter++;
	}
	ft_putnbr_fd(c, 1);
	return (counter);
}
