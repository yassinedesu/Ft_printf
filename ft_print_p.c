/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-kha <yael-kha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 06:12:47 by yael-kha          #+#    #+#             */
/*   Updated: 2025/11/20 20:29:15 by yael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_hexa(unsigned long long c, char *base)
{
	int	i;

	i = 0;
	if (c >= 16)
		i += ft_print_hexa(c / 16, base);
	ft_print_char(base[c % 16]);
	return (i + 1);
}

int	ft_print_p(void *p)
{
	int	count;

	count = ft_print_str("0x");
	count += ft_print_hexa((unsigned long long)p, "0123456789abcdef");
	return (count);
}
