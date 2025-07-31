/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 22:49:58 by amtan             #+#    #+#             */
/*   Updated: 2025/07/31 22:51:24 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_str_is_lowercase(char *str);

// int	main(void)
// {
// 	static char	str[] = "helloworld";
// 	int			result;

// 	result = ft_str_is_lowercase(str);
// 	if (result)
// 		printf("The string \"%s\" is lowercase.\n", str);
// 	else
// 		printf("The string \"%s\" is not lowercase.\n", str);
// 	return (0);
// }

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
