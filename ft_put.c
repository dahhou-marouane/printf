/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahhou <mdahhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:48:57 by mdahhou           #+#    #+#             */
/*   Updated: 2025/11/12 18:44:05 by mdahhou          ###   ########.fr       */
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

long	ft_putnbr(long n)
{
	long a;

	a = 1;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
		a++;
	}
	if (n > 9)
		a += ft_putnbr(n / 10);
	ft_putchar((n % 10) + 48);
	return (a);
}

int main()
{
	printf("\n %ld \n", ft_putnbr(-2147483648));
	// printf("\n %ld \n", ft_putnbr(-2147483648));
}