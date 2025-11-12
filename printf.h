/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahhou <mdahhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:54:55 by mdahhou           #+#    #+#             */
/*   Updated: 2025/11/12 18:42:28 by mdahhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
#include <stdio.h>
#include <unistd.h>

int		ft_putchar(char c);
int		ft_putstr(char *s);
long	ft_putnbr(long n);

#endif