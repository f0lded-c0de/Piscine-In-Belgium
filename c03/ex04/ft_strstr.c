#include <unistd.h>
void	ft_putstr(char *str);

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;

	i = 0;
	while (str[i])
	{
		j = 0;
		k = i;
		while (str[k] == to_find[j])
		{
			k++;
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
