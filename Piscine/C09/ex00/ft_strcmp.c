/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 22:43:08 by amtan             #+#    #+#             */
/*   Updated: 2025/08/04 23:21:51 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

// int	ft_strcmp(char *s1, char *s2);

// int	main(void)
// {
// 	char	str1[] = "Hello, World!";
// 	char	str2[] = "Hello, World!";
// 	int		result;

// 	result = ft_strcmp(str1, str2);
// 	printf("ft_strcmp --> %d\n", result);
// 	printf("strcmp    --> %d\n", strcmp(str1, str2));
// }

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
