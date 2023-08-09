#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_is_base_ok(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (1);
	else
		return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_is_base_ok(base) == 0)
	{
		if (nbr < 0)
			write(1, "-", 1);
		if (nbr > (ft_strlen(base) - 1))
			ft_putnbr_base(nbr / ft_strlen(base), base);
		else if (nbr < ((ft_strlen(base) - 1) * -1))
			ft_putnbr_base((nbr / ft_strlen(base)) * -1, base);
		if (nbr >= 0)
			write(1, &base[nbr % ft_strlen(base)], 1);
		else if (nbr < 0)
			write(1, &base[(nbr % ft_strlen(base)) * -1], 1);
	}
}
