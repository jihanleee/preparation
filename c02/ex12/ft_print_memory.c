/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noellachehab <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:06:38 by noellachehab      #+#    #+#             */
/*   Updated: 2022/12/12 00:48:37 by jihanleee        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(int decimal, char *hex)
{
	ft_putchar(hex[decimal]);
}

void	ft_print_address(void *addr, char *hex)
{
	int		address[16];
	int		i;
	long	temp;

	temp = (long)addr;
	i = 16;
	while (i >= 1)
	{
		address[i - 1] = temp % 16;
		temp /= 16;
		i--;
	}
	while (i < 16)
	{
		ft_puthex(address[i], hex);
		i++;
	}
	ft_putchar(':');
	ft_putchar(' ');
}

void	ft_print_content(void *addr, int size, char *hex)
{
	long	i;

	i = (long)addr;
	while ((long)addr < i + size)
	{
		ft_puthex(*(char *) addr / 16, hex);
		ft_puthex(*(char *)addr % 16, hex);
		addr++;
		if (((long)addr - i) % 2 == 0)
			ft_putchar(' ');
	}
	if (size < 16 && size % 2 == 1)
		ft_putchar(' ');
	addr = (void *)i;
	while ((long )addr < i + size)
	{
		if (*(char *)addr >= 32 && *(char *)addr <= 126)
			ft_putchar(*(char *)addr);
		else
			ft_putchar('.');
		addr++;
	}
	ft_putchar('\n');
}

void	ft_print_memory(void *addr, unsigned int size)
{
	long	i;
	char	*hex;

	hex = "0123456789abcdef";
	i = (long)size;
	while (i > 0)
	{
		if (i > 16)
		{
			ft_print_address(addr, hex);
			ft_print_content(addr, 16, hex);
		}
		else
		{
			ft_print_address(addr, hex);
			ft_print_content(addr, i, hex);
		}
		i -= 16;
		addr += 16;
	}
}
