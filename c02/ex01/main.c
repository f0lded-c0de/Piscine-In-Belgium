#include <unistd.h>
char    *ft_strncpy(char *dest, char*src, unsigned int n);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char src[] = "Hello World !\n";
	char dest[20];

	ft_putstr(src);
	ft_strncpy(dest, src, 20);
	ft_putstr(dest);
}
