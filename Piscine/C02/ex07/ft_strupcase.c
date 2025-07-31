/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 23:02:43 by amtan             #+#    #+#             */
/*   Updated: 2025/07/31 23:07:01 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// char	*ft_strupcase(char *str);

// int	main(void)
// {
// 	static char	str[] = "Hello, World!";

// 	printf("Original: %s\n", str);
// 	ft_strupcase(str);
// 	printf("Uppercase: %s\n", str);
// 	return (0);
// }

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= ' ';
		}
		i++;
	}
	return (str);
}
