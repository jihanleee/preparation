/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihanleee <sbll22006@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 00:12:53 by jihanleee         #+#    #+#             */
/*   Updated: 2022/12/04 00:42:43 by jihanleee        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	is_lowercase;

	is_lowercase = 1;
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
		{
			is_lowercase = 0;
		}
		str++;
	}
	return (is_lowercase);
}

int	main(void)
{
	char str[10];

	scanf("%s", str);
	printf("%d", ft_str_is_lowercase(str));
	return (0);
}
