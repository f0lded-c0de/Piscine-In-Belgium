#include <unistd.h>
int	ft_str_is_numeric(char *str);

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
	char str1[] = "";
	char str2[] = "124436";
	char str3[] = "13452323463";
	int yoop;

	yoop = ft_str_is_numeric(str1);
	ft_putnbr(yoop);
	ft_putchar('\n');
	yoop = ft_str_is_numeric(str2);
	ft_putnbr(yoop);
	ft_putchar('\n');
	yoop = ft_str_is_numeric(str3);
	ft_putnbr(yoop);
	ft_putchar('\n');
	return (0);
}
