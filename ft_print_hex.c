/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-kha <yael-kha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:54:59 by yael-kha          #+#    #+#             */
/*   Updated: 2025/11/22 09:36:45 by yael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int c, char *base)
{
	int				i;
	unsigned long	n;

	i = 0;
	n = c;
	if (n >= 16)
		i += ft_print_hex(n / 16, base);
	i += ft_print_char(base[n % 16]);
	return (i);
}
