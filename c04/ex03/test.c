/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihanleee <sbll22006@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 21:14:14 by jihanleee         #+#    #+#             */
/*   Updated: 2023/01/01 22:13:51 by jihanleee        ###   ########.fr       */
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

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result = result + (*str - '0');
		str++;
	} 
	return (result * sign);
}

int main()
{
	char	*str;

	str = "   ----+--+1234ab567";

	ft_putnbr(ft_atoi(str));
	return 0;
}
