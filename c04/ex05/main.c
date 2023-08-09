void	ft_putnbr(int);
int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	ft_putnbr(ft_atoi_base("  \f\n\r\t\v\r\n\v \f \t ---++-+-+++--80000000grtgfdzet", "0123456789ABCDEF"));
	return (0);
}
