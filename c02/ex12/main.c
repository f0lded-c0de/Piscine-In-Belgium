#include <unistd.h>
void	ft_print_memory(char *addr);
void	ft_puthex(void *c);

int	main(void)
{
	char	str[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);
	return (0);
}
