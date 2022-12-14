/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihanleee <sbll22006@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 23:06:16 by jihanleee         #+#    #+#             */
/*   Updated: 2023/01/03 23:06:39 by jihanleee        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	else
	{
		i = 2;
		while (i < nb)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
		return (1);
	}
}
