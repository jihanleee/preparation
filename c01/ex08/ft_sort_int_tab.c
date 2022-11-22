/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noellachehab <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:47:58 by noellachehab      #+#    #+#             */
/*   Updated: 2022/11/22 16:48:09 by noellachehab     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
