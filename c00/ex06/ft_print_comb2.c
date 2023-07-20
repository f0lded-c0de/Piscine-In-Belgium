#include <unistd.h>

int ft_any(char arr[], int test, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (arr[i] != test)
			return (0);
		i++;
	}
	return (1);
}

void ft_print_comb2(void)
{
	char left[2];
	char right[2];

	left[0] = 48;
	while (left[0] <= 57) {
		left[1] = 48;
		while (left[1] <= 57) {
			right[0] = 48;
			while (right[0] <= 57) {
				right[1] = 48;
				while (right[1] <= 57) {
					write(1, left, 2);
					write(1, " ", 1);
					write(1, right, 2);
					if (ft_any(left, 57, 2) == 0 || ft_any(right, 57, 2) == 0)
						write(1, ", ", 2);
					right[1]++;
				}
				right[0]++;
			}
			left[1]++;
		}
		left[0]++;
	}
}
