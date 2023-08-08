unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;
	int dl;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
		i++;
	if (i == size)
		return (size);
	dl = ft_strlen(dest);
	while (src[j] && i < (size - 1))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dl + ft_strlen(src));
}
