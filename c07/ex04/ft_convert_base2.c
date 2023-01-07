/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihanleee <sbll22006@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:02:34 by jihanleee         #+#    #+#             */
/*   Updated: 2023/01/07 18:02:42 by jihanleee        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr_int;
	char	*dest;

	if (ft_checkbase(base_from) == 0 || ft_checkbase(base_to) == 0)
		return (NULL);
	nbr_int = ft_atoi(nbr, base_from);
	printf("%d\n", nbr_int);
	dest = ft_itoc(nbr_int, base_to);
	return (dest);
}
