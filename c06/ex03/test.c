#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 > *s2)
			return (1);
		else if (*s1 < *s2)
			return (-1);
		s1++;
		s2++;
	}
	return (0);
}
void	ft_swap_pointer(char **argv, int index1, int index2)
{
	char *tmp;
	tmp = argv[index1];
	argv[index1] = argv[index2];
	argv[index2] = tmp;
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_bubblesort_string(int argc, char **argv)
{
	int	change;
	int	i;

	if (argc <= 1)
		return ;
	change = 1;
	while (change)
	{
		i = 1;
		change = 0;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) == 1)
			{
				ft_swap_pointer(argv, i, i + 1);
				change = 1;
			}
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	order;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	ft_bubblesort_string(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
