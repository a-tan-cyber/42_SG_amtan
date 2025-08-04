/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:00:25 by amtan             #+#    #+#             */
/*   Updated: 2025/08/04 16:16:36 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

// unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

// int	main(void)
// {
// 	static char		src[] = "a";
// 	char			dest[20];
// 	unsigned int	size;

// 	size = 2;
// 	printf("Size argument (include NUL to print whole string): %d\n", size);
// 	printf("Source string: %s\n", src);
// 	printf("Return value of strlcpy (src_len) : %d\n", ft_strlcpy(dest, src,
// 			size));
// 	printf("Source Length (src_len; exluding NUL): %lu\n", strlen(src));
// 	printf("Destination Length (exluding NUL): %lu\n", strlen(dest));
// 	printf("Destination after strlcpy: %s\n", dest);
// 	return (0);
// }

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
	{
		return (src_len);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
