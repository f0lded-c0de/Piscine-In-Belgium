#include <unistd.h>
void ft_sort_int_tab(int *tab, int size);

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
	int tab[7];

	tab[0] = 6;
	tab[1] = 4;
	tab[2] = 2;
	tab[3] = 8;
	tab[4] = 6;
	tab[5] = 3;
	tab[6] = 4;
	ft_putnbr(tab[0]);
	ft_putnbr(tab[1]);
	ft_putnbr(tab[2]);
	ft_putnbr(tab[3]);
	ft_putnbr(tab[4]);
	ft_putnbr(tab[5]);
	ft_putnbr(tab[6]);
	ft_putchar('\n');
	ft_sort_int_tab(tab, 7);
	ft_putnbr(tab[0]);
	ft_putnbr(tab[1]);
	ft_putnbr(tab[2]);
	ft_putnbr(tab[3]);
	ft_putnbr(tab[4]);
	ft_putnbr(tab[5]);
	ft_putnbr(tab[6]);
	return (0);
}
