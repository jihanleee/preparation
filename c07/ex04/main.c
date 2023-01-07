int main()
{
	char *str = "    ---++2147483648";
	char *base = "0123456789";

	printf("%d", ft_atoi_base(str, base));
	return 0;
}
