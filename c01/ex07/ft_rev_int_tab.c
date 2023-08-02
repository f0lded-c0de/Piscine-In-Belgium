void ft_rev_int_tab(int *tab, int size)
{
	int buff[size];
	int i;

	i = 0;
	while (i < size)
	{
		buff[i] = tab[size - (i + 1)];
		i++;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = buff[i];
		i++;
	}
}
