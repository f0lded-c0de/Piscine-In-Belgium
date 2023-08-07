#include <unistd.h>
char	*ft_strstr(char *str, char *to_find);

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
	char	str[] = "2346789123456789\n";
	char	to_find[] = "789\n";
	char	*result;

	ft_putstr(str);
	ft_putstr(to_find);
	write(1, "\n", 1);
	result = (ft_strstr(str, to_find));
	ft_putstr(result);
	return (0);
}
