#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	char *s;
	int i;
	int end;

	if (ac == 2)
	{
		s = av[1];
		i = 0;
		while (s[i])
			i++;
		while (i > 0 && (s[i - 1] == ' ' || s[i - 1] == '\t'))
			i--;
		end = i;
		while (i > 0 && s[i - 1] != ' ' && s[i - 1] != '\t')
			i--;
		while (i < end)
		{
			ft_putchar(s[i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
