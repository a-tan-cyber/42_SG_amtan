/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 21:31:07 by amtan             #+#    #+#             */
/*   Updated: 2025/08/05 22:56:01 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

// int	main(void)
// {
// 	static char		dest[50] = "Hello, ";
// 	static char		src[] = "World!";
// 	unsigned int	size;

// 	size = 14;
// 	printf("Size argument (include NUL to print whole string): %d\n", size);
// 	printf("Source string: %s\n", src);
// 	printf("Return value of strlcat (dest_len + src_len): %u\n",
// 		ft_strlcat(dest, src, size));
// 	printf("Destination after strlcat: %s\n", dest);
// 	return (0);
// }

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	i = dest_len;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}
