/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahhou <mdahhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:54:55 by mdahhou           #+#    #+#             */
/*   Updated: 2025/11/14 10:10:40 by mdahhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int			ft_putchar(char c);
int			ft_putstr(char *s);
int			ft_putnbr(int n);
int			ft_putnbru(unsigned int n);
int	ft_puthex(unsigned long n, const char c);
int			ft_printf(const char *s, ...);
int	ft_check(const char c, va_list list);
int	ft_check(const char c, va_list list);
int	ft_putptr(void *ptr);
#endif