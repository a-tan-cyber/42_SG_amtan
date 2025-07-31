/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 22:38:36 by amtan             #+#    #+#             */
/*   Updated: 2025/07/31 22:45:15 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_str_is_alpha(char *str);

// int	main(void)
// {
// 	static char	str[] = "HelloWorld";
// 	int			result;

// 	result = ft_str_is_alpha(str);
// 	if (result)
// 		printf("The string \"%s\" is alphabetic.\n", str);
// 	else
// 		printf("The string \"%s\" is not alphabetic.\n", str);
// }

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}
