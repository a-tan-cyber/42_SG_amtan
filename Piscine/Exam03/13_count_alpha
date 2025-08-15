#include <unistd.h>

/*
** is_alpha: return 1 if c is [A-Za-z], else 0
*/
int	is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
** to_lower: convert [A-Z] to [a-z], otherwise return c unchanged
*/
char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

/*
** put_nbr: print a non-negative integer using only write (recursive)
*/
void	put_nbr(int n)
{
	char	d;

	if (n >= 10)
		put_nbr(n / 10);
	d = '0' + (n % 10);
	write(1, &d, 1);
}

/*
** count_and_print: two passes on s
** 1) count letters case-insensitively in counts[26]
** 2) walk again; on first time seeing each letter, print "countletter"
**    and zero the count to avoid reprinting; separate items with ", "
*/
void	count_and_print(char *s)
{
	int		counts[26];
	int		i;
	int		printed;
	int		idx;
	char	c;

	i = 0;
	while (i < 26)
		counts[i++] = 0;
	i = -1;
	while (s[++i] != '\0')
		if (is_alpha(s[i]))
			counts[to_lower(s[i]) - 'a']++;
	printed = 0;
	i = -1;
	while (s[++i] != '\0')
		if (is_alpha(s[i]))
		{
			idx = to_lower(s[i]) - 'a';
			if (counts[idx] > 0)
			{
				if (printed > 0)
					write(1, ", ", 2);
				put_nbr(counts[idx]);
				c = to_lower(s[i]);
				write(1, &c, 1);
				counts[idx] = 0;
				printed++;
			}
		}
}

/*
** main: if argc != 2, print only '\n'; else solve and then '\n'
*/
int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	count_and_print(argv[1]);
	write(1, "\n", 1);
	return (0);
}