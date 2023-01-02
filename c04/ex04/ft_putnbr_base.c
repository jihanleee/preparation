/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihanleee <sbll22006@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 18:47:40 by jihanleee         #+#    #+#             */
/*   Updated: 2023/01/02 18:48:38 by jihanleee        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_checkbase(char *base)
{
	int	size;
	int	c;
	int	i;

	size = 0;
	while (base[size])
	{
		if (base[size] == '+' || base[size] == '-')
			return (0);
		c = base[size];
		i = 0;
		while (base[size + i])
		{
			i++;
			if (base[size + i] == c)
				return (0);
		}
		size++;
	}
	if (size <= 1)
		return (0);
	else
		return (size);
}

void	ft_putnbr_print(int nbr, char *base, int radix)
{
	long	temp;
	int		str_nbr[34];
	int		i;

	temp = (long)nbr;
	if (temp == 0)
		ft_putchar(base[0]);
	else if (temp < 0)
	{
		ft_putchar('-');
		temp *= -1;
	}
	i = 0;
	while (temp)
	{
		str_nbr[i] = temp % radix;
		temp /= radix;
		i++;
	}
	while (i > 0)
	{
		ft_putchar(base[str_nbr[i - 1]]);
		i--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		radix;

	radix = ft_checkbase(base);
	if (radix == 0)
	{
		return ;
	}
	else
	{
		ft_putnbr_print(nbr, base, radix);
	}
}
