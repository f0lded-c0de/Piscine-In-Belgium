#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(char c)
{
	char	p;

	ft_putchar('\\');
	ft_putchar((c / 16) + 48);
	if ((c % 16) <= 9)
		ft_putchar((c % 16) + 48);
	else
		ft_putchar((c % 16) + 87);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32)
			ft_puthex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
