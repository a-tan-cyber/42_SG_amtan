#include <unistd.h>

static int	is_subseq(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] && s2[j])
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	return (s1[i] == '\0');
}

int	main(int ac, char **av)
{
	int i = 0;

	if (ac == 3 && is_subseq(av[1], av[2]))
	{
		while (av[1][i])
			write(1, &av[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
