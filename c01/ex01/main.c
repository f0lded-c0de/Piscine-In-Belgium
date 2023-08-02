#include <unistd.h>
void ft_ultimate_ft(int *********a);

int main(void)
{
	int a;
	int *a1;
	int **a2;
	int ***a3;
	int ****a4;
	int *****a5;
	int ******a6;
	int *******a7;
	int ********a8;
	int *********a9;


	a = 22;
	a1 = &a;
	a2 = &a1;
	a3 = &a2;
	a4 = &a3;
	a5 = &a4;
	a6 = &a5;
	a7 = &a6;
	a8 = &a7;
	a9 = &a8;
	ft_putnbr(a);
	ft_ft(a9);
	write(1, "\n", 1);
	ft_putnbr(a);
	write(1, "\n", 1);

	return (0);
}

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
