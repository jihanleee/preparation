/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihanleee <sbll22006@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 22:24:20 by jihanleee         #+#    #+#             */
/*   Updated: 2022/12/14 22:24:27 by jihanleee        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;

	while (*dest)
	{
		dest++;
	}
	i = 0;
	while (i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = 0;
	return (dest);
}
