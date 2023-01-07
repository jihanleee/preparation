#include <stdlib.h>
#include <stdio.h>

int	isin_set(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_count_word(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (isin_set(*str, charset) && *str)
			str++;
		if (*str)
			count++;
		while (isin_set(*str, charset) == 0 && *str)
			str++;
	}
	return (count);
}

char	*ft_creat_word(char *str, int word_start, int word_end)
{
	char 	*word;
	int		size_word;
	int		i;
	int		j;

	size_word = word_end - word_start + 2;
	word = (char *)malloc(sizeof (char) * size_word);
	i = word_start;
	j = 0;
	while(i <= word_end)
	{
		word[j] = str[i];
		i++;
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		size_result;
	int		i;
	int		j;
	int		word_start;
	int		word_end;

	size_result = ft_count_word(str, charset) + 1;
	result = (char **)malloc(sizeof (char *) * size_result);
	i = 0;
	j = 0;
	while (j < size_result - 1)
	{
		while (isin_set(str[i], charset) && str[i])
			i++;
		word_start = i;
		while (isin_set(str[i], charset) == 0 && str[i])
			i++;
		result[j] = ft_creat_word(str, word_start, i - 1);
		j++;
	}
	result[j] = NULL;
	return (result);
}
int	main(void)
{
	char	**result;
	int		i;
	result = ft_split(" sadf adge dgefae  2asd2fdf ", "2 ");
	i = 0;
	while(result[i] != 0)
	{
		printf("%d\n", i);
		printf("%s\n", result[i]);
		i++;
	}
	return 0;
}
