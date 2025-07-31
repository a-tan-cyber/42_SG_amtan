/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 22:46:13 by amtan             #+#    #+#             */
/*   Updated: 2025/07/31 22:49:12 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_str_is_numeric(char *str);

// int	main(void)
// {
// 	static char	str[] = "1234567890";
// 	int			result;

// 	result = ft_str_is_numeric(str);
// 	if (result)
// 		printf("The string \"%s\" is numeric.\n", str);
// 	else
// 		printf("The string \"%s\" is not numeric.\n", str);
// 	return (0);
// }

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
