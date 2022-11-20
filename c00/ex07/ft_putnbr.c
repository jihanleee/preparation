/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noellachehab <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:33:18 by noellachehab      #+#    #+#             */
/*   Updated: 2022/11/20 17:37:19 by noellachehab     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* Prints every number written in the array 'str_nb',
from the largest place to the smallest.
if 'str_nb[digit]' is negative,
it multiplies the number with -1 to get the absolute value. */
void	print_str_nbr(char str_nb[10], int digit)
{
	while (digit >= 0)
	{
		if (str_nb[digit] < 0)
			str_nb[digit] *= -1;
		str_nb[digit] += '0';
		ft_putchar(str_nb[digit]);
		digit--;
	}
}

void	ft_putnbr(int nb)
{
	int		digit;
	char	str_nb[10];

	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
	}
	digit = -1;
	while (nb != 0)
	{
		digit++;
		str_nb[digit] = nb % 10;
		nb /= 10;
	}
	print_str_nbr(str_nb, digit);
}
