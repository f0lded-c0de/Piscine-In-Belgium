int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || 
			str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += (str[i] - 48);
		i++;
	}
	if ((sign % 2) == 1)
		result *= -1;
	return (result);
}
