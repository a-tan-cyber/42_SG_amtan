#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*arr;
	int	size;
	int	i;
	int	step;

	if (start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	if (start <= end)
		step = 1;
	else
		step = -1;
	i = 0;
	while (i < size)
	{
		arr[i] = start + (i * step);
		i++;
	}
	return (arr);
}
