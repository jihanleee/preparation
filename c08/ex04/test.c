#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

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
		printf("%x",av[i]);
		scanf("%s\n", av[i]);
		i++;
	}
	s_a = ft_strs_to_tab(size, av);
	i = 0;
	while (s_a[i].str != 0)
	{
		printf("%d\n", s_a[i].size);
		printf("%s\n", s_a[i].str);
		printf("%s\n", s_a[i].copy);
		i++;
	}
	return 0;
}
