#include <unistd.h>

int ft_is_last(char comb[], int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (comb[i] != ((58 - n) + i))
			return (1);
		i++;
	}
	return (0);
}

void ft_print(char comb[], int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		write(1, &comb[i], 1);
		i++;
	}
	if (ft_is_last(comb, n) == 1)
		write(1, ", ", 2);
}

void ft_loop(char comb[], int n, int i)
{
	while (comb[i] <= ((58 - n) + i))
	{
		if (i < (n - 1))
		{
			comb[i + 1] = comb[i] + 1;
			ft_loop(comb, n, (i + 1));
		}
		else
			ft_print(comb, n);
		comb[i]++;
	}
}

void ft_print_combn(int n)
{
	char comb[n];

	if (n >= 1)
		comb[0] = 48;
	if (n >= 2)
		comb[1] = 49;
	if (n >= 3)
		comb[2] = 50;
	if (n >= 4)
		comb[3] = 51;
	if (n >= 5)
		comb[4] = 52;
	if (n >= 6)
		comb[5] = 53;
	if (n >= 7)
		comb[6] = 54;
	if (n >= 8)
		comb[7] = 55;
	if (n >= 9)
		comb[8] = 56;
	ft_loop(comb, n, 0);
}
