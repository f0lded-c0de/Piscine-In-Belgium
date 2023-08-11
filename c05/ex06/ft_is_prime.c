int	ft_is_prime(int nb)
{
	long int	i;

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
