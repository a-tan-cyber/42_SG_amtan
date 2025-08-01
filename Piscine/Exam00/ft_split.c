
#include <stdlib.h>

#include <stdio.h>

static int	is_sep(char c); 
static int	count_words(char *s);
static char	*malloc_word(char *start);
static char	**cleanup(char **res, int filled);
char    **ft_split(char *str);

int     main(void)
{
    char *tests[] = {
        "Hello world this is a test",
        "",
        "   ",
        "one",
        "  leading and trailing  ",
        "multi\tsep\nlines"
    };
    int  num_tests = sizeof(tests) / sizeof(tests[0]);
    int  t;

    for (t = 0; t < num_tests; t++)
    {
        char **res;
        int    i;

        printf("Test #%d: \"%s\"\n", t + 1, tests[t]);
        res = ft_split(tests[t]);
        if (!res)
        {
            printf("  -> ft_split returned NULL\n\n");
            continue;
        }
        i = 0;
        while (res[i])
        {
            printf("  [%d]: \"%s\"\n", i, res[i]);
            free(res[i]);
            i++;
        }
        free(res);
        printf("\n");
    }
    return (0);
}

static int	is_sep(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

static int	count_words(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && is_sep(s[i]))
			i++;
		if (s[i] && !is_sep(s[i]))
		{
			count++;
			while (s[i] && !is_sep(s[i]))
				i++;
		}
	}
	return (count);
}

static char	*malloc_word(char *start)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while (start[len] && !is_sep(start[len]))
		len++;
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**cleanup(char **res, int filled)
{
	int	idx;

	idx = 0;
	while (idx < filled)
	{
		free(res[idx]);
		idx++;
	}
	free(res);
	return (NULL);
}

char	**ft_split(char *s)
{
	char	**res;
	int		words;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	words = count_words(s);
	res = malloc((words + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (j < words)
	{
		while (s[i] && is_sep(s[i]))
			i++;
		res[j] = malloc_word(s + i);
		if (!res[j])
			return (cleanup(res, j));
		while (s[i] && !is_sep(s[i]))
			i++;
		j++;
	}
	res[j] = NULL;
	return (res);
}