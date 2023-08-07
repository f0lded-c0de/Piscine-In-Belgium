#include <unistd.h>
void	ft_putstr_non_printable(char *str);
void	ft_puthex(char c);

int	main(void)
{
	char	str[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);
	return (0);
}
