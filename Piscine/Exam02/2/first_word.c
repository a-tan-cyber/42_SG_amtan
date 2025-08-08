#include <unistd.h>

void first_word(char *str)
{
	while (*str == ' ' || *str == '\t')
			str++;
	while (*str && *str != ' ' && *str != '\t')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	char *str = argv[1];
	first_word(str);
	return (0);
}
