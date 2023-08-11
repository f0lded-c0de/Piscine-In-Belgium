#include <unistd.h>

void	ft_put_plc(int *plc)
{
	int	i;
	int	buff;

	i = 0;
	while (i <= 9)
	{
		buff = plc[i] + 48;
		write(1, &buff, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_is_here_ok(int *plc, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		if (plc[i] == plc[j] || i == j || 
				(plc[i] - plc[j]) == (i - j) ||
				(plc[i] - plc[j]) == ((i - j) * -1))
			return (1);
		j++;
	}
	return (0);
}

void	ft_place_queens(int *plc, int i, int *p_psb)
{
	int	k;

	k = 0;
	while (k <= 9)
	{
		plc [i] = k;
		if (ft_is_here_ok(plc, i) == 0)
		{
			if (i < 9)
				ft_place_queens(plc, i + 1, p_psb);
			if (i == 9)
			{
				(*p_psb)++;
				ft_put_plc(plc);
			}
		}
		k++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	plc[10];
	int	psb;

	psb = 0;
	ft_place_queens(plc, 0, &psb);
	return (psb);
}
