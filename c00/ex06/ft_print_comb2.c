#include <unistd.h>

void ft_print_comb2(void)
{
	char left[2];
	char right[2];

	left[0] = 48;
	while(left[0] <= 57) {
		left[1] = 48;
		while(left[1] <= 57) {
			right[0] = 48;
			while(right[0] <= 57) {
				right[1] = 48;
				while(right[1] <= 57) {
						write(1, left, 2);
						write(1, " ", 1);
						write(1, right, 2);
						if(left[0] != 57 || left[1] != 57 || right[0] != 57 || right[1] != 57)
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
