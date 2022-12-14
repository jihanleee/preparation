#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 > *s2)
			return (1);
		else if (*s1 < *s2)
			return (-1);
		s1++;
		s2++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	found;

	if (*to_find == 0)
		return (str); 
	while (*str)
	{
		i = 0;
		while (to_find[i])
		{
			found = 1;
			if (str[i] != to_find[i])
			{
				found = 0;
				break;
			}
			i++;
		}
		if (found == 1)
			return (str);
		else
			str++;
	}
	return (0);
}

int main()
{
	char haystack[50];
	char needle[50];

	printf("haystack:");
	scanf("%s", haystack);
	printf("needle:");
	needle[0]  0;
	printf("address haystack: %x", haystack);
	printf("return:%x", ft_strstr(haystack, needle));
	return 0;
}
