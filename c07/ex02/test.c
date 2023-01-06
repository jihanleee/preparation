#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	num;
	int	i;
	int	*arr;

	len = max - min;
	arr = (int *)malloc(sizeof (int) * len);
	*range = arr;
	num = min;
	i = 0;
	while (num < max)
	{
		(*range)[i] = num;
		num++;
		i++;
	}
	return (sizeof (range));
}

int	main(void)
{
	int	min;
	int	max;
	int	len;
	int	i;
	int	**range;

	scanf("%d %d", &min, &max);
	range = (int **)malloc(sizeof (int *));
	printf("%d\n", ft_ultimate_range(range, min, max));
	printf("ok");
	len = max - min;
	i = 0;
	while (i < len)
	{
		printf("%d\n", (*range)[i]);
		i++;
	}
	free(*range);
	free(range);
	return 0;
}
