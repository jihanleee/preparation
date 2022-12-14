/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihanleee <sbll22006@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 22:55:53 by jihanleee         #+#    #+#             */
/*   Updated: 2022/12/14 22:57:54 by jihanleee        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	found;

	if (*to_find == 0)
		return (str);
	while (*str)
	{
		i = 0;
		while (to_find[i])
		{
			found = 1;
			if (str[i] != to_find[i])
			{
				found = 0;
				break ;
			}
			i++;
		}
		if (found == 1)
			return (str);
		else
			str++;
	}
	return (0);
}
