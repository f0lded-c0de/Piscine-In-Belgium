#include <unistd.h>
char	*ft_strcpy(char *dest, char *src);

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
	char src[] = "Hellow world !\n";
	char dest[16];

	ft_putstr(src);
	ft_strcpy(dest, src);
	ft_putstr(dest);

	return (0);
}
