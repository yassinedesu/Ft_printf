/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-kha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:55:38 by yael-kha          #+#    #+#             */
/*   Updated: 2025/11/20 20:34:45 by yael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_print_char(char c);
int	ft_print_digit(int c);
int	ft_print_str(char *s);
int	ft_print_unsigned_int(unsigned int c);
int	ft_print_hex(unsigned int c, char *base);
int	ft_print_p(void *p);
int	ft_printf(const char *format, ...);

#endif
