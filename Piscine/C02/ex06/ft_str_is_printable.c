/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 22:54:44 by amtan             #+#    #+#             */
/*   Updated: 2025/07/31 23:02:10 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_str_is_printable(char *str);

// int	main(void)
// {
// 	static char	str[] = "Hello, World!";
// 	int			result;

// 	result = ft_str_is_printable(str);
// 	if (result)
// 		printf("The string \"%s\" is printable.\n", str);
// 	else
// 		printf("The string \"%s\" is not printable.\n", str);
// 	return (0);
// }

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
			return (0);
		i++;
	}
	return (1);
}
