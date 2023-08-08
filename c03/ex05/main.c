#include <unistd.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

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
	char	dest[] = "Hello ";
	char	src[] = "World !\n";

	ft_putstr(dest);
	write(1, "\n", 1);
	ft_putstr(src);
	write(1, "\n", 1);
	ft_putnbr(ft_strlcat(dest, src, 3));
	write(1, "\n", 1);
	ft_putstr(dest);
	write(1, "\n", 1);
	return (0);
}
