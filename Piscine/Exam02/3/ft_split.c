#include <stdlib.h>

/*
** Checks if a character is a separator (space, tab, or newline).
** Returns 1 if it is, 0 otherwise.
*/
static int	is_sep(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/*
** Counts the number of words in the given string.
** A word is a sequence of non-separator characters.
*/
static int	count_words(char *s)
{
	int count;
	int in_word;

	count = 0;        // Number of words found so far
	in_word = 0;      // Flag: 0 if currently outside a word, 1 if inside
	while (*s)        // Loop until end of string
	{
		if (is_sep(*s))
			in_word = 0; // We hit a separator → we're outside a word
		else if (!in_word)
		{
			// We just entered a word
			in_word = 1;
			count++;   // Increase the word count
		}
		s++;
	}
	return (count);
}

/*
** Returns the length of the next word (number of chars until a separator or '\0').
*/
static int	word_len(char *s)
{
	int len = 0;

	while (s[len] && !is_sep(s[len]))
		len++;
	return (len);
}

/*
** Splits the string `str` into an array of words (NULL-terminated).
** Words are separated by spaces, tabs, or newlines.
** Allocates memory for the array and for each word.
*/
char	**ft_split(char *str)
{
	char	**out;   // The resulting array of strings
	int		words;   // Total number of words
	int		i;       // Index for current word
	int		len;     // Length of the current word
	int		j;       // Index for characters inside the word

	if (!str)
		return (0);
	words = count_words(str);
	out = (char **)malloc((words + 1) * sizeof(char *));
	if (!out)
		return (0); // Allocation failed for the array
	i = 0;
	while (*str)
	{
		// Skip separators until we find the start of a word
		while (*str && is_sep(*str))
			str++;
		if (*str)
		{
			// Get word length
			len = word_len(str);
			// Allocate space for the word (+1 for '\0')
			out[i] = (char *)malloc((len + 1) * sizeof(char));
			if (!out[i])
				return (0); // Allocation failed for a word
			// Copy the word character by character
			j = 0;
			while (j < len)
			{
				out[i][j] = str[j];
				j++;
			}
			out[i][j] = '\0'; // Null-terminate the word
			i++;
			str += len; // Move pointer past the word
		}
	}
	out[i] = 0; // Null-terminate the array
	return (out);
}
