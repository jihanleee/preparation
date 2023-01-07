#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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

int main()
{
	char *str = "    ---++0";
	char *base_from = "0123456789";
	char *base_to = "0123456789abcdef";
	char *dest;

	dest = ft_convert_base(str, base_from, base_to);
	printf("\n%s\n", dest);
	free(dest);
	return 0;
}
