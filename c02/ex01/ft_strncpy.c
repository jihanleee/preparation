/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noellachehab <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:36:39 by noellachehab      #+#    #+#             */
/*   Updated: 2022/12/01 14:48:47 by noellachehab     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	foundnull;

	foundnull = 0;
	i = 0;
	while (i < n)
	{
		if (src[i] == 0)
			foundnull = 1;
		if (foundnull == 0)
		{
			dest[i] = src[i];
		}
		else if (foundnull == 1)
			dest[i] = 0;
		i++;
	}
	return (dest);
}
