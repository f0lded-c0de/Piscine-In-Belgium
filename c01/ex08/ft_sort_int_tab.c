void ft_sort_int_tab(int *tab, int size)
{
	int buff;
	int i;
	int j;

	i = 0;
	while (i < (size - 1))
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				buff = tab[i];
				tab[i] = tab[j];
				tab[j] = buff;
			}
			j++;
		}
		i++;
	}
}
