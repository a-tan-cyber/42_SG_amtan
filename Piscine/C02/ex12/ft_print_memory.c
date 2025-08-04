/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:28:59 by amtan             #+#    #+#             */
/*   Updated: 2025/08/04 22:24:49 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	*ft_print_memory(void *addr, unsigned int size);
void	*get_address_hex(void *ptr);
void	print_hex_line(unsigned char *ptr, unsigned int len);
void	print_ascii_line(unsigned char *ptr, unsigned int len);

// int	main(void)
// {
// 	unsigned char	str[] =
// "Bonjour les aminches\t\n\tc\a est fou\ttout ce qu on peut faire avec.
// \n\tprint_memory\n\n\n\tlol.lol\n \0";

// 	ft_print_memory(str, sizeof(str) - 1);
// 	return (0);
// }

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*ptr;
	int				len;

	ptr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		get_address_hex(ptr + i);
		write(1, ": ", 2);
		len = size - i;
		if (len > 16)
			len = 16;
		print_hex_line(ptr + i, len);
		print_ascii_line(ptr + i, len);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}

void	*get_address_hex(void *ptr)
{
	unsigned long	addr;
	char			buf[16];
	int				i;
	char			*hex;

	hex = "0123456789abcdef";
	addr = (unsigned long)ptr;
	i = 15;
	while (i >= 0)
	{
		buf[i] = hex[addr % 16];
		addr /= 16;
		i--;
	}
	write(1, buf, 16);
	return (ptr);
}

void	print_hex_line(unsigned char *ptr, unsigned int len)
{
	unsigned int	j;
	char			buf[2];
	char			*hex;

	hex = "0123456789abcdef";
	j = 0;
	while (j < 16)
	{
		if (j < len)
		{
			buf[0] = hex[(ptr[j] >> 4) & 0xF];
			buf[1] = hex[ptr[j] & 0xF];
		}
		else
		{
			buf[0] = ' ';
			buf[1] = ' ';
		}
		write(1, buf, 2);
		if (j % 2)
			write(1, " ", 1);
		j++;
	}
}

void	print_ascii_line(unsigned char *ptr, unsigned int len)
{
	unsigned int	j;
	char			c;

	j = 0;
	while (j < len)
	{
		c = ptr[j];
		if (c < 32 || c > 126)
			c = '.';
		write(1, &c, 1);
		j++;
	}
}
