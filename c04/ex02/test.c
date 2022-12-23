#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	nbr[10];
	long	temp;
	int	i;

	temp = (long)nb;
	if (temp == 0)
		ft_putchar('0');
	if (temp < 0)
	{
		ft_putchar('-');
		temp *= -1;
	}
	i = 0;
	while (temp)
	{
		nbr[i] = temp % 10 + '0';
		temp /= 10;
		i++;
	}
	while (i > 0)
	{
		ft_putchar(nbr[i - 1]);
		i--;
	}
}

int main ()
{
	int a;
	a = 214783647;
	ft_putnbr(a);
	return 0;
}
