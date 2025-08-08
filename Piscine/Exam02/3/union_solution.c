#include <unistd.h>

int	main(int ac, char **av)
{
	int             used[256];
	int             i;
	unsigned char   c;

	if (ac == 3)
	{
		i = 0;
		while (i < 256)
			used[i++] = 0;

		i = 0;
		while (av[1][i])
		{
			c = (unsigned char)av[1][i++];
			if (!used[c])
			{
				write(1, &c, 1);
				used[c] = 1;
			}
		}
		i = 0;
		while (av[2][i])
		{
			c = (unsigned char)av[2][i++];
			if (!used[c])
			{
				write(1, &c, 1);
				used[c] = 1;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}