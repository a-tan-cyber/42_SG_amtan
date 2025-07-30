// maff_revalpha.c

#include <unistd.h>

int	main(void)
{
	char	c;
	int		pos;

	c = 'z';
	while (c >= 'a')
	{
		pos = 'z' - c + 1;
		if (pos % 2 == 0)
		{
			char	up;

			up = c - 32;
			write(1, &up, 1); // even → uppercase
		}
		else
			write(1, &c, 1);             // odd → lowercase
		c--;
	}
	write(1, "\n", 1);
	return (0);
}

