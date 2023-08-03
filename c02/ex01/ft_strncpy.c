char	*ft_strncpy(char *dest, char*src, unsigned int n)
{
	int i;
	int fin;

	i = 0;
	fin = 0;
	while (i < n)
	{
		if (fin == 0)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		if (src[i] == '\0')
			fin = 1;
		i++;
	}
	return (dest);
}
