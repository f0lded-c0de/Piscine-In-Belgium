#include <unistd.h>

void ft_print_comb(void)
{
	char comb[3];

	comb[0] = 48;
	while(comb[0] <= 55)
	{
		comb[1] = comb[0] + 1;
		while(comb[1] <= 56)
		{
			comb[2] = comb[1] + 1;
			while(comb[2] <= 57)
			{
				write(1, comb, 3);
				if(comb != "789")
				{
					write(1, ", ", 2);
				}
				comb[2]++;
			}
			comb[1]++;
		}
		comb[0]++;
	}
}
