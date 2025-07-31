/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 22:52:13 by amtan             #+#    #+#             */
/*   Updated: 2025/07/31 22:53:36 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_str_is_uppercase(char *str);

// int	main(void)
// {
// 	static char	str[] = "HELLOWORLD";
// 	int			result;

// 	result = ft_str_is_uppercase(str);
// 	if (result)
// 		printf("The string \"%s\" is uppercase.\n", str);
// 	else
// 		printf("The string \"%s\" is not uppercase.\n", str);
// 	return (0);
// }

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
