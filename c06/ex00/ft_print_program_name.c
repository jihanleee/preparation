/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihanleee <sbll22006@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 21:59:34 by jihanleee         #+#    #+#             */
/*   Updated: 2023/01/04 22:00:39 by jihanleee        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*name;

	name = argv[0];
	while (*name)
	{
		write(1, name, 1);
		name++;
	}
	return (0);
}
