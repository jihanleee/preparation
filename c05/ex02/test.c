#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	i = 1;
	result = 1;
	while (i <= power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

int main()
{
	int	nb;
	int power;
	printf("nb");
	scanf("%d", &nb);
	printf("power");
	scanf("%d", &power);
	printf("%d", ft_iterative_power(nb, power));
	return 0;
}
