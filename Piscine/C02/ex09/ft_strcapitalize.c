/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 23:10:23 by amtan             #+#    #+#             */
/*   Updated: 2025/07/31 23:41:52 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// char	*ft_strcapitalize(char *str);

// int	main(void)
// {
// 	static char	str[] = "hi, how are you? 42words forty-two; fifty+and+one";

// 	printf("Original: %s\n", str);
// 	ft_strcapitalize(str);
// 	printf("Capitalized: %s\n", str);
// 	return (0);
// }

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize_next;

	i = 0;
	capitalize_next = 1;
	while (str[i] != '\0')
	{
		if (((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0'
					&& str[i] <= '9')) && capitalize_next)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= ' ';
			capitalize_next = 0;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') && !capitalize_next)
			str[i] += ' ';
		else if ((str[i] < '0' || str[i] > '9') && (str[i] < 'A'
				|| str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			capitalize_next = 1;
		i++;
	}
	return (str);
}
