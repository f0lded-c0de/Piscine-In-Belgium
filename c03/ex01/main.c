#include <unistd.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb > 9 || nb < -9)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			ft_putnbr((nb / 10) * -1);
			ft_putnbr((nb % 10) * -1);
		}
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putchar((nb * -1) + 48);
	}
	else
		ft_putchar(nb + 48);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
        {
	        write(1, &str[i], 1);
	        i++;
	}
}

int main(void)
{
	char	s1[] = "123456789123456789\n";
	char	s2[] = "12345\n";

	ft_putstr(s1);
	ft_putstr(s2);
	ft_putnbr(ft_strncmp(s1, s2, 10));
	return (0);
}
