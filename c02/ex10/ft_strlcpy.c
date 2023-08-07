unsigned int	ft_strlcpy(char *dest, char*src, unsigned int size)
{
	unsigned int	i;
	int		fin;

	i = 0;
	fin = 0;
	while (i < (size - 1))
	{
		if (fin == 0)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		if (src[i] == '\0')
			fin = 1;
		i++;
	}
	dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
