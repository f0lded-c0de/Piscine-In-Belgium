#include <unistd.h>
void ft_putnbr(int);

int main(void)
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(-3001040);
	write(1, "\n", 1);
	ft_putnbr(-3);
	write(1, "\n", 1);
	ft_putnbr(-1);
	write(1, "\n", 1);
	ft_putnbr(-0);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(1);
	write(1, "\n", 1);
	ft_putnbr(5);
	write(1, "\n", 1);
	ft_putnbr(72);
	write(1, "\n", 1);
	ft_putnbr(500030400);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);

	return (0);
}
