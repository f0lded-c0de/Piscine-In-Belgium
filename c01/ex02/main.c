#include <unistd.h>
void ft_swap(int *a, int *b);

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

int main(void)
{
	int a;
	int b;

	a = 12;
	b = 13;
	ft_putnbr(a);
	ft_putnbr(b);
	ft_swap(&a, &b);
	write(1, "\n", 1);
	ft_putnbr(a);
	ft_putnbr(b);
	write(1, "\n", 1);

	return (0);
}
