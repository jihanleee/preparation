#include <stdio.h>
char	*ft_strcat(char *dest, char *src)
{
	while(*dest)
	{
		dest++;
	}
	while(*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (dest);
}
int	main()
{
	char dest[10] = "iam";
	char src[10] = "gay";
	ft_strcat(dest, src);
	printf("%s",dest);
}
