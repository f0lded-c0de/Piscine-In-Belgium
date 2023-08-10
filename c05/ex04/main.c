#include <unistd.h>
int	ft_fibonacci(int);

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
	ft_putnbr(ft_fibonacci(-12));
	ft_putchar('\n');
	ft_putnbr(ft_fibonacci(-1));
	ft_putchar('\n');
	ft_putnbr(ft_fibonacci(0));
	ft_putchar('\n');
	ft_putnbr(ft_fibonacci(1));
	ft_putchar('\n');
	ft_putnbr(ft_fibonacci(2));
	ft_putchar('\n');
	ft_putnbr(ft_fibonacci(3));
	ft_putchar('\n');
	ft_putnbr(ft_fibonacci(4));
	ft_putchar('\n');
	ft_putnbr(ft_fibonacci(5));
	ft_putchar('\n');
	ft_putnbr(ft_fibonacci(6));
	ft_putchar('\n');
	ft_putnbr(ft_fibonacci(7));
	ft_putchar('\n');

	return (0);
}
