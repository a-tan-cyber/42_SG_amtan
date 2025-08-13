/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:46:18 by amtan             #+#    #+#             */
/*   Updated: 2025/08/13 19:44:46 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_sep(str[i], charset))
			i++;
		if (str[i] != '\0')
		{
			count++;
			while (str[i] != '\0' && !is_sep(str[i], charset))
				i++;
		}
	}
	return (count);
}

char	*copy_word(char *str, int len)
{
	int		i;
	char	*word;

	word = (char *)malloc(sizeof(char) * (len + 1));
	if (word == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

int	fill(char **arr, char *str, char *charset)
{
	int	i;
	int	len;

	i = 0;
	while (*str != '\0')
	{
		while (*str != '\0' && is_sep(*str, charset))
			str++;
		if (*str == '\0')
			break ;
		len = 0;
		while (str[len] != '\0' && !is_sep(str[len], charset))
			len++;
		arr[i] = copy_word(str, len);
		if (arr[i] == 0)
			return (-1);
		i++;
		str += len;
	}
	arr[i] = 0;
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		words;

	words = count_words(str, charset);
	arr = (char **)malloc(sizeof(char *) * (words + 1));
	if (arr == 0)
		return (0);
	if (fill(arr, str, charset) == -1)
		return (0);
	return (arr);
}

// #include <stdio.h>

// void	print_split(char **v)
// {
// 	int	i;

// 	i = 0;
// 	while (v[i])
// 	{
// 		printf("[%s]\n", v[i]);
// 		i++;
// 	}
// }

// int	main(void)
// {
// 	char	**v;

// 	v = ft_split("..hello,,world..42..", ".,");
// 	print_split(v);
// 	return (0);
// }
