/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 12:15:23 by amtan             #+#    #+#             */
/*   Updated: 2025/08/13 19:43:39 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	if (!src)
		return (NULL);
	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	count;

	if (!str)
		return (0);
	count = 0;
	while (str[count])
		count++;
	return (count);
}

// #include <stdio.h>

// int	main(void)
// {
// 	static char	*src = "Hello, World!";
// 	char		*dest;

// 	dest = ft_strdup(src);
// 	if (dest)
// 	{
// 		printf("Original : %s\n", src);
// 		printf("Duplicate: %s\n", dest);
// 		free(dest);
// 	}
// 	else
// 		printf("Memory allocation failed.\n");
// 	return (0);
// }
