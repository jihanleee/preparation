/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihanleee <sbll22006@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 22:12:32 by jihanleee         #+#    #+#             */
/*   Updated: 2023/01/05 22:18:58 by jihanleee        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	num;
	int	i;
	int	*arr;

	len = max - min;
	if (len <= 0)
	{
		range = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof (int) * len);
	if (arr == NULL)
		return (-1);
	*range = arr;
	num = min;
	i = 0;
	while (num < max)
	{
		(*range)[i] = num;
		num++;
		i++;
	}
	return (sizeof (range));
}
