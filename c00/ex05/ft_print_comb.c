/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noellachehab <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:00:22 by noellachehab      #+#    #+#             */
/*   Updated: 2022/11/17 16:46:33 by noellachehab     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;
	int		i;

	i = 0;
	while (1)
	{
		c = i % 10 + 48;
		b = (i % 100) / 10 + 48;
		a = (i % 1000) / 100 + 48;
		if (a < b && b < c)
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, &c, 1);
			if (i == 789)
				break ;
			a = 44;
			write(1, &a, 1);
			a = 32;
			write(1, &a, 1);
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
