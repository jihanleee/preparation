#include <stdio.h>

int	ft_interative_factorial(int nb)
{
	int result;

	if (nb < 0)
		return (0);
	result = 1;
	while(nb >= 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

int main()
{
	int nb;

	printf("type nb:");
	scanf("%d", &nb);
	printf("result:%d\n", ft_interative_factorial(nb));
	return 0;
}
