int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] && i < n)
		i++;
	while (s2[j] && j < n)
		j++;
	return (i - j);
}
