char *ft_strrev(char *str)
{
	int i;
	int j;
	char temp;

	j = 0;
	while (str[j])
		j++;
	j--;
	i = 0;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}
