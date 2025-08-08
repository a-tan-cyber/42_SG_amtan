#include <unistd.h>

int	ft_strlen(char *s)
{
	int i;

	if (!s || !*s)
		return (-1);
	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

void my_strcat(char *s1, char *s2, char *s12)
{
	int i;

	i = 0;
	while (*s1)
	{
		s12[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		s12[i] = *s2;
		s2++;
		i++;
	}
	s12[i] = '\0';
}

int seen(char *s, char c, int i)
{
	int j;

	j = 0;
	while (j < i)
	{
		if (s[j] == c)
			return (1);
		j++;
	}
	return (0);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		char *s1;
		char *s2;
		int i;
		int j;
		int s1_len;
		int s2_len;

		s1 = av[1];
		s2 = av[2];
		s1_len = ft_strlen(s1);
		s2_len = ft_strlen(s2);
		if (s1_len == -1 || s2_len == -1)
			return (-1);
		char s12[s1_len + s2_len + 1];
		my_strcat(s1, s2, s12);
		i = 0;
		while (s12[i])
		{
			if (!seen(s12, s12[i], i))
				write(1, &s12[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
