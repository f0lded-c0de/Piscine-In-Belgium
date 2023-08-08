void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int	ft_strlen(char *str);

int	main(void)
{
	char	str[] = "This is a test\n";

	ft_putstr(str);
	ft_putnbr(ft_strlen(str));
	ft_putstr(str);
	return (0);
}
