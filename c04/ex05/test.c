#include <unistd.h>
#include <stdio.h>

/* Returns 0 if the argument is invalid.
Returns the size if the argument is valid.
'size' means the radix which the string 'base' string represents. 
*/
int	ft_checkbase(char *base)
{
	int	size;
	int	c;
	int	i;

	size = 0;
	while (base[size])
	{
		if (base[size] == '+' || base[size] == '-')
			return 0;
		c = base[size];
		i = 0;
		while (base[size + i])
		{
			i++;
			if (base[size + i] == c)
				return 0;
		}
		size++;
	}
	if (size <= 1)
		return (0);
	else
		return size;
}

int	ft_isinbase(char *base, char c)
{
	int location;

	location = 0;
	while(base[location])
	{
		printf("location %d\n",location);
		if (c == base[location])
			return (location);
		location++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	result;

	if(ft_checkbase(base) == 0)
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
		printf("result: %d", result);
		str++;
	}
	printf("all the process has been successfuly executed\n");
	return (result * sign);
}

int main()
{
	char *str = "    --++BC4g";
	char *base = "0123456789ABCDEF";

	printf("%d", ft_atoi_base(str, base));
	return 0;
}
