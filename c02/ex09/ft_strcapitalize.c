/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihanleee <sbll22006@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 20:28:50 by jihanleee         #+#    #+#             */
/*   Updated: 2022/12/04 20:29:02 by jihanleee        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	charcapitalize(char *c)
{
	if (*c >= 'a' && *c <= 'z')
	{
		*c -= 32;
	}
}

int	char_is_alpha_num(char *c)
{
	int	is_alpha_num;

	is_alpha_num = 0;
	if (*c >= 'a' && *c <= 'z')
	{
		is_alpha_num = 2;
	}
	else if (*c >= 'A' && *c <= 'Z')
	{
		is_alpha_num = 1;
	}
	else if (*c >= '0' && *c <= '9')
	{
		is_alpha_num = 1;
	}
	return (is_alpha_num);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (char_is_alpha_num(&str[i]) == 2)
	{
		charcapitalize(&str[i]);
	}
	i++;
	while (str[i])
	{
		if (char_is_alpha_num(&str[i - 1]) == 0)
		{
			charcapitalize(&str[i]);
		}
		i++;
	}
	return (str);
}
