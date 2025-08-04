/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hteo <hteo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 23:27:55 by amtan             #+#    #+#             */
/*   Updated: 2025/07/29 23:17:29 by hteo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
void	rush00_01(int rush_num);
void	rush02_03(int rush_num);
void	rush04(void);

int	ft_atoi(char *str)
{
	int	sum;
	int	i;
	int	sign;

	i = 0;
	sum = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		++i;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	return (sign * sum);
}

void	set_char(int rush_num)
{
	if (rush_num == 0 || rush_num == 1)
		rush00_01(rush_num);
	if (rush_num == 2 || rush_num == 3)
		rush02_03(rush_num);
	if (rush_num == 4)
		rush04();
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;
	int	rush_num;

	if (argc != 4 || ft_atoi(argv[3]) < 0 || ft_atoi(argv[3]) > 4)
	{
		write(2, "Usage: ./a.out <x> <y> <rush number>", 36);
		return (1);
	}
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	rush_num = ft_atoi(argv[3]);
	set_char(rush_num);
	rush(x, y);
	return (0);
}
