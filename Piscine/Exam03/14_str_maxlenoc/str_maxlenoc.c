#include <unistd.h>

/* ---------- tiny helpers ---------- */

static int	ft_strlen(char *s)
{
	int i = 0;
	while (s && s[i])
		i++;
	return (i);
}

/* returns the first index where pat[0..len-1] occurs in hay, or -1 if none */
static int	index_of(char *hay, char *pat, int len)
{
	int i;
	int j;

	if (len == 0)
		return (0);
	i = 0;
	while (hay[i])
	{
		j = 0;
		while (hay[i + j] && j < len && hay[i + j] == pat[j])
			j++;
		if (j == len)
			return (i);
		i++;
	}
	return (-1);
}

/* check that pat[0..len-1] appears in EVERY string av[1..ac-1] */
static int	in_all(int ac, char **av, char *pat, int len)
{
	int i;

	i = 1;
	while (i < ac)
	{
		if (index_of(av[i], pat, len) < 0)
			return (0);
		i++;
	}
	return (1);
}

/* find index (in argv) of the shortest argument among av[1..ac-1] */
static int	idx_shortest(int ac, char **av)
{
	int best_i = 1;
	int best_len = ft_strlen(av[1]);
	int i = 2;
	int L;

	while (i < ac)
	{
		L = ft_strlen(av[i]);
		if (L < best_len)
		{
			best_len = L;
			best_i = i;
		}
		i++;
	}
	return (best_i);
}

/* ---------- main search ---------- */

int	main(int ac, char **av)
{
	char	*smin;
	int		i_min;
	int		len_min;
	int		len;          /* candidate length */
	int		start;        /* start in smin */
	int		best_pos;     /* best first index in av[1] among matches of current len */
	int		pos;

	if (ac <= 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	i_min = idx_shortest(ac, av);
	smin = av[i_min];
	len_min = ft_strlen(smin);

	len = len_min;
	while (len > 0)
	{
		best_pos = -1;
		start = 0;
		while (start + len <= len_min)
		{
			if (in_all(ac, av, smin + start, len))
			{
				pos = index_of(av[1], smin + start, len);
				if (pos >= 0 && (best_pos < 0 || pos < best_pos))
					best_pos = pos;
			}
			start++;
		}
		if (best_pos >= 0)
		{
			write(1, av[1] + best_pos, len);
			write(1, "\n", 1);
			return (0);
		}
		len--;
	}
	write(1, "\n", 1);
	return (0);
}
