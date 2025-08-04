/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 22:55:26 by amtan             #+#    #+#             */
/*   Updated: 2025/08/04 23:41:06 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

// int	ft_strncmp(char *s1, char *s2, unsigned int n);

// int	main(void)
// {
// 	char			str1[] = "Hello, World!";
// 	char			str2[] = "Hell0, W0rld!";
// 	unsigned int	n;

// 	n = 10;
// 	printf("str1 --> \"%s\"\n", str1);
// 	printf("str2 --> \"%s\"\n", str2);
// 	printf("Comparing first %u characters:\n", n);
// 	printf("ft_strncmp --> %d\n", ft_strncmp(str1, str2, n));
// 	printf("strncmp    --> %d\n", strncmp(str1, str2, n));
// }

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
