/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-kha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:55:38 by yael-kha          #+#    #+#             */
/*   Updated: 2025/11/18 18:59:18 by yael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <unistd.h>

int	ft_print_char(char c);
int	ft_print_digit(int c);
int	ft_print_str(char *s);
int	ft_print_unsigned_int(unsigned int c);

#endif
