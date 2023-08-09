#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
		ft_putchar('-');
	if (nb > 9)
		ft_putnbr(nb / 10);
	else if (nb < -9)
		ft_putnbr((nb / 10) * -1);
	if (nb < 0)
		ft_putchar(((nb % 10) * -1) + 48);
	else
		ft_putchar((nb % 10) + 48);
}
