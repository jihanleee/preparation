#include <stdio.h>
nt	ft_sqrt(int nb)
{
	int	i;
	i = 0;
	while(i * i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

int main()
{
	int nb;
	scanf("%d", &nb);
	printf("%d", ft_sqrt(nb));
	return 0;
}
