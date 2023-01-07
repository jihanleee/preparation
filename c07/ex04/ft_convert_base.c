/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihanleee <sbll22006@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:02:16 by jihanleee         #+#    #+#             */
/*   Updated: 2023/01/07 18:02:22 by jihanleee        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/* Returns 0 if the argument is invalid.
Returns the size if the argument is valid.
'size' also means the radix which the string 'base' string represents. */
int	ft_checkbase(char *base)
{
	int	size;
	int	c;
	int	i;

	size = 0;
	while (base[size])
	{
		if (base[size] == '+' || base[size] == '-')
			return (0);
		c = base[size];
		i = 0;
		while (base[size + i])
		{
			i++;
			if (base[size + i] == c)
				return (0);
		}
		size++;
	}
	if (size <= 1)
		return (0);
	else
		return (size);
}

/* If char c is in char *base, returns the index of the location.
if char c is not in char *base, returns -1. */
int	ft_isinbase(char *base, char c)
{
	int	location;

	location = 0;
	while (base[location])
	{
		if (c == base[location])
			return (location);
		location++;
	}
	return (-1);
}

/* Converts a string which
represents a number written in a certain number base
that consists of char *base,
into an int variable and returns it.*/
int	ft_atoi(char *str, char *base)
{
	int	sign;
	int	result;

	if (ft_checkbase(base) == 0)
		return (0);
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	result = 0;
	while (ft_isinbase(base, *str) != -1)
	{
		result *= ft_checkbase(base);
		result = result + ft_isinbase(base, *str);
		str++;
	}
	return (result * sign);
}

/* Returns the length of the string for a number written
in a certain number base. int len does not include
the NULL character and the sign. */
int	ft_c_len(int nbr_int, char *base)
{
	int	len;

	if (nbr_int == 0)
		return (1);
	len = 0;
	while (nbr_int)
	{
		len++;
		nbr_int /= ft_checkbase(base);
	}
	printf("%d\n", len);
	return (len);
}

/* Writes a char array represents int nbr_int
in the number base that consists of char *base,
and assigns it in char *dest and returns its pointer. */
char	*ft_itoc(int nbr_int, char *base)
{
	char	*dest;
	long	temp;
	int		i;

	temp = (long)nbr_int;
	dest = (char *)malloc(sizeof (char) * ((ft_c_len(nbr_int, base)) + 2));
	i = ft_c_len(nbr_int, base);
	printf("i%d\n", i);
	if (temp < 0)
	{
		dest[0] = '-';
		i++;
		temp *= -1;
	}
	dest[i] = '\0';
	i--;
	while (i >= 0 && dest[i] != '-')
	{
		printf("%c", base[temp % ft_checkbase(base)]);
		dest[i] = base[temp % ft_checkbase(base)];
		temp /= ft_checkbase(base);
		i--;
	}
	return (dest);
}
