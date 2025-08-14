#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_putstr(char *s)
{
	int i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		ft_putchar(s[i++]);
	return (1);
}

int ft_strlen(char *s)
{
	int i;

	if (!s)
		return (-1);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

int ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!*to_find)
		return (0);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (1);
		i++;
	}
	return (0);
}

char *find_longest_substr(int i, int len, int substr_max_len, int ac, char** av)
{
	int i;

	while (len >= substr_max_len)
	{
		i = 1;
		while (i < ac)
		{
			ft_strstr()
			i++;
		}

		len--;
	}
}

void free_strs(char **substrs)
{

}

char *get_appears_first(char **substrs, char *first_str)
{

}

int main(int ac, char **av)
{
	int i;
	int shortest_len;
	int len;
	int substr_max_len;
	int substr_len;
	char **substrs = NULL;
	char *substring = NULL;

	if (ac == 1)
	{
		ft_putchar('\n');
		return (1);
	}
	shortest_len = strlen(av[1]);
	i = 2;
	len = 0;
	while (i < ac)
	{
		len = ft_strlen(av[i]);
		if (len < shortest_len)
			shortest_len = len;
		i++;
	}
	i = 1;
	substr_max_len = 0;
	substr_len = 0;
	while (i < ac)
	{
		len = ft_strlen(av[i]);
		if (len == shortest_len)
		{
			substring = find_longest_substr(i, len, substr_max_len, ac, av);
			substr_len = ft_strlen(substring);
			if (substr_len)
			{
				if (substrs && substr_len > substr_max_len)
				{
					substr_max_len = substr_len;
					free_strs(sub_strs);
				}
				substrs = store_substrs(substrs, substring)
			}
		}
		i++;
	}
	if (!substr_len)
	{
		ft_putchar('\n');
		return (0);
	}
	substring = get_appears_first(substrs, av[1]);
	ft_putstr(substring);
	return (0);
}
