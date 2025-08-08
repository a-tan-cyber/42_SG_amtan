#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void rot13(char *str)
{
	char	c;

	while (*str)
	{
		c = *str;
		if (c >= 'a' && c <= 'z')
			c = ((c - 'a' + 1) % 26) + 'a';
		else if (c >= 'A' && c <= 'Z')
			c = ((c - 'A' + 1) % 26) + 'A';
		ft_putchar(c);
		str++;
	}
	ft_putchar('\n');
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	rot13(av[1]);
	return (0);
}
