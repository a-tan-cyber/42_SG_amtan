char	*ft_strrev(char *str)
{
	int		start;
	int		end;
	char	temp;
	int		len;

	start = 0;
	len = 0;
	while (str[len] != '\0')
		len++;
	end = len - 1;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	return (str);
}

