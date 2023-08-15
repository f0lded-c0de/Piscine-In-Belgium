#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_arrays(int argc, char **argv)
{
	int	i;
	int	j;
	char *strBuff;

	i = 1;
	while (i < (argc - 1))
	{
		j = (i + 1);
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				strBuff = argv[i];
				argv[i] = argv[j];
				argv[j] = strBuff;
			}
			j++;
		}
		i++;
	}
}
int	main(int argc, char **argv)
{
	int	i;
	
	ft_sort_arrays(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
