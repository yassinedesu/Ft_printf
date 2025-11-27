/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-kha <yael-kha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:35:33 by yael-kha          #+#    #+#             */
/*   Updated: 2025/11/22 09:45:31 by yael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handling_condition(int c)
{
	if (c == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (c == INT_MAX)
	{
		write(1, "2147483647", 10);
		return (10);
	}
	else if (c == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	return (0);
}

int	ft_print_digit(int c)
{
	int		i;
	char	pr;

	i = 0;
	if (c == INT_MIN || c == INT_MAX || c == 0)
		return (handling_condition(c));
	if (c < 0)
	{
		c *= -1;
		i += write(1, "-", 1);
	}
	if (c >= 10)
		i += ft_print_digit(c / 10);
	pr = (c % 10) + '0';
	i += write(1, &pr, 1);
	return (i);
}
