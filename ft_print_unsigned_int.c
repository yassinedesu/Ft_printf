/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-kha <yael-kha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:21:45 by yael-kha          #+#    #+#             */
/*   Updated: 2025/11/22 09:40:49 by yael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned_int(unsigned int c)
{
	unsigned int	i;
	char			pr;

	i = 0;
	if (c == 4294967295)
	{
		write(1, "4294967295", 10);
		return (10);
	}
	if (c >= 10)
		i += ft_print_unsigned_int(c / 10);
	pr = (c % 10) + '0';
	i += write(1, &pr, 1);
	return (i);
}
