/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahhou <mdahhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 02:34:45 by mdahhou           #+#    #+#             */
/*   Updated: 2025/11/14 10:23:44 by mdahhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_check(const char c, va_list list)
{
	int		j;

	j = 0;
	if (c == 'c')
		j += ft_putchar(va_arg(list, int));
	else if (c == 's')
		j += ft_putstr(va_arg(list, char *));
	else if (c == 'p')
		j += ft_putptr(va_arg(list, void *));
	else if (c == 'd')
		j += ft_putnbr(va_arg(list, int));
	else if (c == 'i')
		j += ft_putnbr(va_arg(list, int));
	else if (c == 'u')
		j += ft_putnbru(va_arg(list, unsigned int));
	else if (c == 'x')
		j += ft_puthex(va_arg(list, unsigned int), c);
	else if (c == 'X')
		j += ft_puthex(va_arg(list, unsigned int), c);
	else if (c == '%')
		j += ft_putchar('%');
	return (j);
}

int	ft_printf(const char *s, ...)
{
	int		j;
	int		i;
	va_list	list;

	va_start(list, s);
	j = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			j += ft_check(s[i], list);
		}
		else
			j += ft_putchar(s[i]);
		i++;
	}
	va_end(list);
	return (j);
}
