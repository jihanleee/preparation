/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihanleee <sbll22006@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 22:58:52 by jihanleee         #+#    #+#             */
/*   Updated: 2023/01/09 22:59:26 by jihanleee        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
