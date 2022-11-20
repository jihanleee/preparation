/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noellachehab <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:43:59 by noellachehab      #+#    #+#             */
/*   Updated: 2022/11/20 16:31:28 by noellachehab     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* Converts each digit of two-digit number into ASCII format,
and assigns it to the char variable of corresponding digit
and print. */
void	print2digit(int n)
{
	char	ones;
	char	tens;

	ones = n % 10 + '0';
	n /= 10;
	tens = n % 10 + '0';
	ft_putchar(tens);
	ft_putchar(ones);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = 0;
		while (b <= 99)
		{
			if (a < b)
			{
				print2digit(a);
				ft_putchar(' ');
				print2digit(b);
				if (a != 98)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
}
