/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:18:10 by amtan             #+#    #+#             */
/*   Updated: 2025/07/31 15:15:10 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_strlen(char *str);

// int	main(void)
// {
// 	static char	str[] = "Hello, World!";
// 	int			length;

// 	length = ft_strlen(str);
// 	printf("The length of the string is: %d\n", length);
// 	return (0);
// }

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
