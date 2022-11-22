/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noellachehab <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:26:17 by noellachehab      #+#    #+#             */
/*   Updated: 2022/11/22 16:46:15 by noellachehab     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	done;

	done = 0;
	while (done == 0)
	{
		i = 0;
		done = 1;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				printf("swap\n");
				ft_swap(&tab[i], &tab[i + 1]);
				done = 0;
			}
			i++;
		}
	}
}

void	print_arr(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}

int main(void)
{
	int tab[5];
	int i;

	tab[0] = 5;
	tab[1] = 4;
	tab[2] = 3;
	tab[3] = 2;
	tab[4] = 1;
	ft_sort_int_tab(tab, 5);
	print_arr(tab, 5);
}
