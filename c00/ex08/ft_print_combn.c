/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noellachehab <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:33:18 by noellachehab      #+#    #+#             */
/*   Updated: 2022/11/21 21:30:22 by noellachehab     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_str_nb(char str_nb[10])
{
	int	i;

	while (*str_nb)
	{
		ft_putchar(*str_nb);
		str_nb++;
	}
}

int	is_end(char str_nb[10], int n)
{
	int	i;

	n--;
	i = 9;
	while (n >= 0)
	{
		if (str_nb[n] != i + '0')
			return (0);
		n--;
		i--;
	}
	return (1);
}

void	dfs(char str_nb[10], int depth, int n)
{
	int	i;

	if (depth == n)
	{
		str_nb[n] = 0;
		print_str_nb(str_nb);
		if (is_end(str_nb, n) == 0)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
	else
	{
		i = depth;
		while (i <= 9)
		{
			if (depth == 0 || str_nb[depth - 1] < i + '0')
			{
				str_nb[depth] = i + '0';
				dfs(str_nb, depth + 1, n);
			}
			i++;
		}
	}
}

void	ft_print_combn(int n)
{
	char	str_nb[10];

	dfs(str_nb, 0, n);
}
