/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihanleee <sbll22006@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 22:52:02 by jihanleee         #+#    #+#             */
/*   Updated: 2022/12/14 23:53:03 by jihanleee        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	len_dest;
	int	len_src;
	int	i;

	i = 0;
	while (src[i])
		i++;
	len_src = i;
	i = 0;
	while (dest[i])
		i++;
	len_dest = i;
	while (i < size)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (len_dest + len_src);
}
