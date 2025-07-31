/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 23:07:28 by amtan             #+#    #+#             */
/*   Updated: 2025/07/31 23:08:35 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// char	*ft_strlowcase(char *str);

// int	main(void)
// {
// 	static char	str[] = "HELLO, WORLD!";

// 	printf("Original: %s\n", str);
// 	ft_strlowcase(str);
// 	printf("Lowercase: %s\n", str);
// 	return (0);
// }

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += ' ';
		}
		i++;
	}
	return (str);
}
