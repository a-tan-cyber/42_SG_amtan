int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}

	return (i);
}

#include <stdio.h>

int main(void)
{
	char *str = "123";
	printf("%d\n", ft_strlen(str));
}
