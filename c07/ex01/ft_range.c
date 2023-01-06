/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihanleee <sbll22006@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 19:10:59 by jihanleee         #+#    #+#             */
/*   Updated: 2023/01/05 19:14:18 by jihanleee        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	num;
	int	i;
	int	*arr;

	len = max - min;
	if (len <= 0)
		return (NULL);
	arr = (int *)malloc(sizeof (int) * len);
	num = min;
	i = 0;
	while (num < max)
	{
		arr[i] = num;
		num++;
		i++;
	}
	return (arr);
}
