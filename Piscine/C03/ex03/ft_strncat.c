/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 20:05:21 by amtan             #+#    #+#             */
/*   Updated: 2025/08/05 20:11:23 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

// char	*ft_strncat(char *dest, char *src, unsigned int nb);

// int	main(void)
// {
// 	static char		dest1[50] = "Hello, ";
// 	static char		src1[] = "World!";
// 	static char		dest2[50] = "Hello, ";
// 	static char		src2[] = "World!";
// 	unsigned int	nb;

// 	nb = 3;
// 	printf("ft_strcat --> %s\n", ft_strncat(dest1, src1, nb));
// 	printf("strcat    --> %s\n", strncat(dest2, src2, nb));
// 	return (0);
// }

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
