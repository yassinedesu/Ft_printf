/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-kha <yael-kha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 19:16:54 by yael-kha          #+#    #+#             */
/*   Updated: 2025/11/22 10:27:54 by yael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handling_prints(char specifier, va_list args)
{
	if (specifier == 'd' || specifier == 'i')
		return (ft_print_digit(va_arg(args, int)));
	else if (specifier == 'u')
		return (ft_print_unsigned_int(va_arg(args, unsigned int)));
	else if (specifier == 'p')
		return (ft_print_p(va_arg(args, void *)));
	else if (specifier == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (specifier == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (specifier == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (specifier == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (specifier == '%')
		return (ft_print_char('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;

	va_start(args, format);
	if (!format)
		return (-1);
	count = 0;
	while (*format)
	{
		if (*format == '%' && *(format + 1) == '\0')
			break ;
		if (*format == '%')
		{
			format++;
			count += handling_prints(*format, args);
		}
		else
			count += ft_print_char(*format);
		format++;
	}
	va_end(args);
	return (count);
}
