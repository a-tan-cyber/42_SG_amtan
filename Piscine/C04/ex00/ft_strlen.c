/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:51:13 by amtan             #+#    #+#             */
/*   Updated: 2025/08/06 15:53:04 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_strlen(char *str);

// int	main(void)
// {
// 	static char	str[] = "Hello, World!";
// 	int			length;

// 	length = ft_strlen(str);
// 	printf("The length of the string \"%s\" is: %d\n", str, length);
// 	return (length);
// }

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
