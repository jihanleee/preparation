#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (dest);
}

int	ft_totallen(int size, char **strs, char *sep)
{
	int	len;
	int	seplen;
	int	i;

	seplen = ft_strlen(sep);
	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		printf("current str %s\n", strs[i]);
		printf("%d\n",len);
		i++;
	}
	printf("len %d\n", len);
	len = len + ((size - 1) * (seplen));
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	totallen;
	char	*str;

	printf("in ft_strjoin %s\n", strs[0]);
	totallen = ft_totallen(size, strs, sep);
	printf("totallen : %d\n", totallen);
	str = (char *)malloc(sizeof (char) * (totallen + 1));
	str[0] = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if  (i != size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

int	main()
{
	char	**strs;
	char	sep[20] = "!";
	char	*output;
	int	i;

	strs = (char **)malloc(sizeof (char *) * 5);
	i = 0;
	while (i < 5)
	{
		strs[i] = (char *)malloc(sizeof (char) * 10);
		scanf("%s", strs[i]);
		printf("%s\n", strs[i]);
		i++;
	}
	output = ft_strjoin(0, strs, sep);
	printf("%s", output);
	i = 0;
	while (i < 5)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	free (output);
	return (0);
}
