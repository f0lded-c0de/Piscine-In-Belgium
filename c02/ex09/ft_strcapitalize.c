char	*ft_strcapitalize(char *str)
{
	int i;
	int w;

	i = 0;
	w = 0;
	while (str[i])
	{
		if (w == 0 && ((str[i] >= 48 && str[i] <= 57) ||
					(str[i] >= 65 && str[i] <= 90) || 
					(str[i] >= 97 && str[i] <= 122)))
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
			w = 1;
		}
		if (w == 1 && (str[i] < 48 || 
					(str[i] > 57 && str[i] < 65) ||
					(str[i] > 90 && str[i] < 97) ||
					str[i] > 122))
			w = 0;
		i++;
	}
	return (str);
}
