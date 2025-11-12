/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahhou <mdahhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:48:57 by mdahhou           #+#    #+#             */
/*   Updated: 2025/11/12 19:27:15 by mdahhou          ###   ########.fr       */
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
	int	a;

	a = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		write(1, &s[i], 1);
		a++;
		i++;
	}
	return (a);
}

int	ft_putnbr(int n)
{
	int		a;
	long	b;

	b = n;
	a = 1;
	if (b < 0)
	{
		write(1, "-", 1);
		b *= -1;
		a++;
	}
	if (b > 9)
		a = ft_putnbr(b / 10);
	ft_putchar((b % 10) + 48);
	return (a);
}

int main()
{
	ft_putnbr(123);
	// printf("\n %d \n", ft_putnbr(123));
	// printf("\n %d \n", -214748364);
}