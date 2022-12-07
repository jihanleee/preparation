/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noellachehab <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:06:38 by noellachehab      #+#    #+#             */
/*   Updated: 2022/12/08 00:11:25 by jihanleee        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(char *a, char *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_rev_char_tab(char *tab, int size)
{
	int	i;

	i = 0;
	while (i <= (size - 1) / 2)
	{
		ft_swap(&tab[i], &tab[size - 1 - i]);
		i++;
	}
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

void	ft_putaddr(int *pointer)
{
	int		i;
	char	str_addr[17];
	long 	addr;

	addr = (long) pointer;
	printf("%lx\n", addr);
	i = 0;
	while (i < 16)
	{
		str_addr[i] = addr % 16;
		printf("%d\n", str_addr[i]);
		if (str_addr[i] >= 10)
			str_addr[i] += 87;
		else
			str_addr[i] += '0';
		addr /= 16;
		i++;
	}
	str_addr[i] = 0;
	ft_rev_char_tab(str_addr, 16);
	ft_putstr(str_addr);
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

	while (str[i])
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
void	*ft_print_memory(void *addr, unsigned int size)
{
	return (addr);
}

int main()
{
	int a;
	int *pa;

	pa = &a;

	ft_putaddr(pa);

	return (0);
}
