#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(*str)
	{
		str++;
		len++;
	}
	return (len);
}

int main()
{
	char *a;
	a = "abcdefg";
	printf("%d", ft_strlen(a));
	return 0;
}

