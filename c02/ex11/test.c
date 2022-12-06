/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihanleee <sbll22006@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 10:28:30 by jihanleee         #+#    #+#             */
/*   Updated: 2022/12/06 22:35:51 by jihanleee        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putchar_hex(char c)
{
	char	first;
	char	second;

	first = (c / 16) + '0';
	second = (c % 16);
	if (second >= 10)
		second += 87;
	else
		second += '0';
	ft_putchar(first);
	ft_putchar(second);
}

int	char_is_printable(char *c)
{
	int	is_printable;

	is_printable = 1;
	if (*c < 32 || *c > 126)
		is_printable = 0;
	return (is_printable);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	while(str[i])
	{
		if (char_is_printable(&str[i]))
			write(1, &str[i], 1);
		else
		{
			ft_putchar('/');
			putchar_hex(str[i]);
		}
		str++;
	}
}

int	main(void)
{
	char str[100] = "Coucou\ntu vas bien?";

	ft_putstr_non_printable(str);
	return (0);
}
