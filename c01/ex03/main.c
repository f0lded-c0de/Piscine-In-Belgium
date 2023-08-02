#include <unistd.h>
void ft_div_mod(int a, int b, int *div, int *mod);

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
	int div;
	int mod;

	a = 32;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	ft_putnbr(div);
	write(1, "\n", 1);
	ft_putnbr(mod);
	write(1, "\n", 1);

	return (0);
}
