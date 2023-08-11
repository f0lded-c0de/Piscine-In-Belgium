int     ft_is_prime(int nb)
{
	long int        i;

	i = 5;
	if (nb == 2 || nb == 3)
		return (1);
	if (nb < 2 || (nb % 2) == 0 || (nb % 3) == 0)
	{
		return (0);
	}
	while ((i * i) <= nb)
	{
		if ((nb % i) == 0 || (nb % (i + 2)) == 0)
		{
			return (0);
		}
		i += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
