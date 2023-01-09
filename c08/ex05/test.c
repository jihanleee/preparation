#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;
	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str *arr;
	int		i;

	arr = (struct s_stock_str *)malloc(sizeof (struct s_stock_str) * (ac + 1));
	if (arr == 0)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = (char *)malloc(sizeof (char) * (arr[i].size + 1));
		if(arr[i].str == 0)
			return (NULL);
		arr[i].copy = (char *)malloc(sizeof (char) * (arr[i].size + 1));
		if(arr[i].str == 0)
			return (NULL);
		ft_strcpy(arr[i].str, av[i]);
		ft_strcpy(arr[i].copy, arr[i].str);
		i++;
	}

	arr[i].str = 0;
	return (arr);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	char	nbr[10];
	long	temp;
	int		i;

	temp = (long)nb;
	if (temp == 0)
		ft_putchar('0');
	if (temp < 0)
	{
		ft_putchar('-');
		temp *= -1;
	}
	i = 0;
	while (temp)
	{
		nbr[i] = temp % 10 + '0';
		temp /= 10;
		i++;
	}
	while (i > 0)
	{
		ft_putchar(nbr[i - 1]);
		i--;
	}
}
void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	i = 0;
	while(par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}


int main(void)
{
	struct s_stock_str *s_a;
	char	**av;
	int		size;
	int		i;

	size = 5;
	av = (char **)malloc(sizeof (char *) * size);
	if (av == 0) return 0;
	printf("%x\n", av);

	i = 0;
	while (i < size)
	{
		av[i] = (char *)malloc(sizeof (char) * 20);
		scanf("%s\n", av[i]);
		i++;
	}
	s_a = ft_strs_to_tab(size, av);
	ft_show_tab(s_a);
	
	return 0;
}

