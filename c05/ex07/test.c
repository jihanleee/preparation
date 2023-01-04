#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	else
	{
		i = 2;
		while (i < nb)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
		return (1);
	}
}

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}

}

int main()
{
	int	nb;

	scanf("%d", &nb);
	printf("%d", ft_find_next_prime(nb));
	return 0;
}
