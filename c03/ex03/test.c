#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;

	while(*dest)
	{
		dest++;
	}
	i = 0;
	while(i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = 0;
	return (dest);
}
int	main()
{
	char dest[10] = "you are";
	char src[10] = "gay";
	ft_strncat(dest, src, 2);
	printf("%s",dest);
}
