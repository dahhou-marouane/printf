/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahhou <mdahhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:48:57 by mdahhou           #+#    #+#             */
/*   Updated: 2025/11/14 10:08:08 by mdahhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		write(1, &s[i], 1);
		j++;
		i++;
	}
	return (j);
}

int	ft_putnbr(int n)
{
	int		j;

	j = 1;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		j++;
	}
	if (n > 9)
		j += ft_putnbr(n / 10);
	ft_putchar((n % 10) + 48);
	return (j);
}
int	ft_putnbru(unsigned int n)
{
	int	j;

	j = 1;
	if (n > 9)
		j += ft_putnbru(n / 10);
	ft_putchar((n % 10) + 48);
	return (j);
}

int	ft_puthex(unsigned long n, const char c)
{
	int	j;
	char	*base;

	j = 0;
	if (c == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
		j += ft_puthex((n / 16), c);
	j += ft_putchar(base[n % 16]);
	return (j);
}
int	ft_putptr(void *ptr)
{
	int count;

	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	count = 0;
	count += ft_putstr("0x");
	count += ft_puthex((unsigned long)ptr, 'x');
	return (count);
}