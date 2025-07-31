/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 22:43:21 by amtan             #+#    #+#             */
/*   Updated: 2025/07/31 16:34:54 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// char	*ft_strcpy(char *dest, char *src);

// int	main(void)
// {
// 	static char	src[] = "Hello, World!";
// 	char		dest[50];

// 	ft_strcpy(dest, src);
// 	printf("Source: %s\n", src);
// 	printf("Destination: %s\n", dest);
// 	return (0);
// }

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
