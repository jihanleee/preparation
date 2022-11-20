/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noellachehab <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:06:38 by noellachehab      #+#    #+#             */
/*   Updated: 2022/11/17 14:36:44 by noellachehab     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	i;

	i = 122;
	while (i <= 97)
	{
		write(1, &i, 1);
		i++;
	}
}
