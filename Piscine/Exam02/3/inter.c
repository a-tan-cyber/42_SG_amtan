#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int already_seen(char *s, int i)
{
	char c;

	c = s[i];
	i--;
	while (i >= 0)
	{
		if (s[i] == c)
			return (1);
		i--;
	}
	return (0);
}

int in(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

int main(int ac, char **av)
{
	char *s1;
	char *s2;
	int i;

	if (ac == 3)
	{
		s1 = av[1];
		s2 = av[2];
		i = 0;
		while (s1[i])
		{
			if (!already_seen(s1, i) && in(s2, s1[i]))
				ft_putchar(s1[i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
