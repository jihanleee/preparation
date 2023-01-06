#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;
	
	len = 0;
	while (str[len])
		len++;
	len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\n';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = (char *)malloc(sizeof (char) * (ft_strlen(src) + 1));
	ft_strcpy(dest, src);
	return (dest);
}

int main()
{
	char	src[20] = "this is sparta";
	char	*dest;

	dest = ft_strdup(src);
	printf("%s", dest);
	free(dest);
	return (0);
}
