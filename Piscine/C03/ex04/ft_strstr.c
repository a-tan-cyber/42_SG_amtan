/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 21:02:33 by amtan             #+#    #+#             */
/*   Updated: 2025/08/05 21:30:06 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// char	*ft_strstr(char *str, char *to_find);

// int	main(void)
// {
// 	static char	str[] = "Hello, World!";
// 	static char	to_find[] = "Wor";
// 	char		*result;

// 	result = ft_strstr(str, to_find);
// 	if (result)
// 		printf("%s\n", result);
// 	else
// 		printf("Not found\n");
// 	return (0);
// }

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
