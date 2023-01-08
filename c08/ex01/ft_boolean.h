/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihanleee <sbll22006@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 20:46:31 by jihanleee         #+#    #+#             */
/*   Updated: 2023/01/08 20:46:35 by jihanleee        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# define TRUE 1
# define FALSE 0
# define EVEN(nbr)	((nbr % 2) ? TRUE : FALSE)
# define EVEN_MSG "I\ have\ an\ even\ number\ of\ arguments.\n"
# define ODD_MSG "I\ have\ an\ odd\ number\ of\ arguments.\n"
# define SUCCESS 0

typedef int	t_bool;

#endif
