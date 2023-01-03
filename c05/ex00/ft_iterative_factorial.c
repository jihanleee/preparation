/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihanleee <sbll22006@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 20:40:47 by jihanleee         #+#    #+#             */
/*   Updated: 2023/01/02 20:41:04 by jihanleee        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_interative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb >= 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
