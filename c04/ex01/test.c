#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}

int main()
{
	char *a;
	a = "abcd";
	ft_putstr(a);
	return 0;
}
