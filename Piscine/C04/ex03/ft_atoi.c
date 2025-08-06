/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:04:04 by amtan             #+#    #+#             */
/*   Updated: 2025/08/06 17:03:18 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

// int	ft_atoi(char *str);

// int	main(void)
// {
// 	static char	str1[] = "42abc";
// 	static char	str2[] = "		-42";
// 	static char	str3[] = "+42";
// 	static char	str4[] = "+-+-42";
// 	static char	str5[] = "-+42";

// 	printf("Input: \"%s\" -> Output: %d\n", str1, ft_atoi(str1));
// 	printf("Input: \"%s\" -> Output: %d\n", str2, ft_atoi(str2));
// 	printf("Input: \"%s\" -> Output: %d\n", str3, ft_atoi(str3));
// 	printf("Input: \"%s\" -> Output: %d\n", str4, ft_atoi(str4));
// 	printf("Input: \"%s\" -> Output: %d\n", str5, ft_atoi(str5));
// 	return (0);
// }

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
