/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihanleee <sbll22006@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:59:13 by jihanleee         #+#    #+#             */
/*   Updated: 2022/12/12 22:14:23 by jihanleee        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	while(*s1 || *s2)
	{
		if (*s1 > *s2)
			return 1;
		else if(*s1 < *s2)
			return -1;
		s1++;
		s2++;
	}
	return 0;
}
int	main()
{
	char *s1 = "abc";
	char *s2 = "abcd";
	printf("%d", ft_strcmp(s1, s2));
	printf("%d", ft_strcmp(s2, s1));
	printf("%d", ft_strcmp(s1, s1));
	return 0;
}
