#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	num;
	int	i;
	int	*arr;

	len = max - min;
	if (len <= 0)
		return (NULL);
	arr = (int *)malloc(sizeof (int) * len);
	num = min;
	i = 0;
	while (num < max)
	{
		arr[i] = num;
		num++;
		i++;
	}
	return (arr);
}

int	main(void)
{
	int	min;
	int	max;
	int	len;
	int	i;
	int	*arr;

	scanf("%d %d", &min, &max);
	arr = ft_range(min, max);
	len = max - min;
	i = 0;
	while (i < len)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	free(arr);
	return 0;
}

