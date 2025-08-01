/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: your_login <your_login@student.42.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 13:00:00 by your_login        #+#    #+#             */
/*   Updated: 2025/08/01 13:00:00 by your_login       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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