/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihanleee <sbll22006@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 22:31:51 by jihanleee         #+#    #+#             */
/*   Updated: 2023/01/09 22:33:49 by jihanleee        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*arr;
	int					i;

	arr = (struct s_stock_str *)malloc(sizeof (struct s_stock_str) * (ac + 1));
	if (arr == 0)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = (char *)malloc(sizeof (char) * (arr[i].size + 1));
		if (arr[i].str == 0)
			return (NULL);
		arr[i].copy = (char *)malloc(sizeof (char) * (arr[i].size + 1));
		if (arr[i].str == 0)
			return (NULL);
		ft_strcpy(arr[i].str, av[i]);
		ft_strcpy(arr[i].copy, arr[i].str);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}
