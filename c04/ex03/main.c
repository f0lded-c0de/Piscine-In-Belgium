void	ft_putnbr(int);
int	ft_atoi(char *str);

int	main(void)
{
	int	n;
	char	str[] = "  \f\n\r\t\v\r\n\v \f \t ---++-+-+++--1grtgfdzet";

	n = ft_atoi(str);
	ft_putnbr(n);
	return (0);
}
