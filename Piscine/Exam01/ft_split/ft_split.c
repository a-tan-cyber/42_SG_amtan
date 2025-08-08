
#include <stdio.h>
#include <stdlib.h>

static int	is_sep(char c);
static int	count_words(char *str);
static char	*malloc_word(char *start);
static char	**cleanup(char **res, int filled);
char		**ft_split(char *str);

int	main(void)
{
	static char	*tests[] = {"Hello world this is a test", "", "   ", "one",
			"  leading and trailing  ", "multi\tsep\nlines"};
	int			num_tests;
	int			t;
	char		**res;
	int			i;

	num_tests = sizeof(tests) / sizeof(tests[0]);
	for (t = 0; t < num_tests; t++)
	{
		printf("Test #%d: \"%str\"\n", t + 1, tests[t]);
		res = ft_split(tests[t]);
		if (!res)
		{
			printf("  -> ft_split returned NULL\n\n");
			continue ;
		}
		i = 0;
		while (res[i])
		{
			printf("  [%d]: \"%str\"\n", i, res[i]);
			free(res[i]);
			i++;
		}
		free(res);
		printf("\n");
	}
	return (0);
}

// Check if a character is a separator (space, tab, or newline)
static int	is_sep(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

// Count the number of words in the input string
// This will be used to allocate memory for the result array
static int	count_words(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;

	// Traverse the string and count words
	// A word starts after a separator and ends before the next separator
	while (str[i])
	{
		// Skip leading separators
		while (str[i] && is_sep(str[i]))
			i++;
		// If we find a non-separator character, we have found a word
		if (str[i] && !is_sep(str[i]))
		{
			// Increment the word count
			count++;
			// Move the index forward until we hit a separator
			while (str[i] && !is_sep(str[i]))
				i++;
		}
	}
	// Return the total count of words found
	return (count);
}

// Allocate memory for a word and copy it from the start pointer
// The start pointer should point to the beginning of the word in the input string
// The function returns a pointer to the newly allocated word string
// If memory allocation fails, it returns NULL
static char	*malloc_word(char *start)
{
	char	*word; // Pointer to hold the allocated word
	int		len; // Length of the word to be copied
	int		i; // Index for copying characters

	len = 0;
	// Calculate the length of the word until the next separator or end of string
	while (start[len] && !is_sep(start[len]))
		len++;

	// Allocate memory for the word (+1 for the null terminator)
	word = malloc((len + 1) * sizeof(char));
	
	// Check if memory allocation was successful
	if (!word)
		return (NULL);

	// Copy the word from the start pointer to the newly allocated memory
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

char	**ft_split(char *str)
{
	char **res; // Store result - array of words terminated by NULL
	int words; // Count of words in the input string
	int i; // Index for traversing the input string
	int j; // Index for filling the result array

	// Step 0: Guard against NULL input
	if (!str)
		return (NULL); // As specified by assignment requirements

	// Step 1: Count the number of words in the input string <- for alllocating memory
	words = count_words(str);

	// Step 2: Allocate memory for the result array of strings (words + 1 for NULL terminator)
	res = malloc((words + 1) * sizeof(char *));
	if (!res) // Check if memory allocation was successful
		return (NULL);

	// Step 3: Input words into result array
	// By walking through the input string (str), extract each word and fill the result array
	i = 0;
	j = 0;

	// Loop until we have processed all words
	while (j < words)
	{
		// Skip leading separators
		while (str[i] && is_sep(str[i]))
			i++;

		// Allocate and copy the current word
		// malloc_word expects a pointer to the start of the word
		// It will return a pointer to the newly allocated word
		res[j] = malloc_word(str + i);

		// If memory allocation for the word failed, clean up and return NULL
		if (!res[j])
			return (cleanup(res, j));
		
		// Move the index forward to the end of the current word
		while (str[i] && !is_sep(str[i]))
			i++;
		
		// Increment the word count index
		// This will ensure we fill the next position in the result array
		j++;
	}
	// Null-terminate the result array
	res[j] = NULL;
	// Return the filled result array
	return (res);
}