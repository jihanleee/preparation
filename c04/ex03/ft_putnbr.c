/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihanleee <sbll22006@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 22:48:56 by jihanleee         #+#    #+#             */
/*   Updated: 2022/12/23 22:48:59 by jihanleee        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	nbr[10];
	long	temp;
	int		i;

	temp = (long)nb;
	if (temp == 0)
		ft_putchar('0');
	if (temp < 0)
	{
		ft_putchar('-');
		temp *= -1;
	}
	i = 0;
	while (temp)
	{
		nbr[i] = temp % 10 + '0';
		temp /= 10;
		i++;
	}
	while (i > 0)
	{
		ft_putchar(nbr[i - 1]);
		i--;
	}
}
