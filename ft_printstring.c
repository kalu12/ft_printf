/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:03:59 by luvuceno          #+#    #+#             */
/*   Updated: 2023/03/02 20:42:24 by luvuceno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_prinstring(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (write(STDOUT_FILENO, "(null)", 6));
	while (str[i])
	{	
		write(STDOUT_FILENO, &str[i], 1);
		i++;
	}
	return (i);
}
