

char		*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char		*ft_sss(char *str, int b)
{
	if (str[b] >= 'a' && str[b] <= 'z')
	{
		str[b] = str[b] - 32;
		b++;
	}
	return (str);
}

char		*ft_dddd(char *str, int d)
{
	if (str[d] >= 'a' && str[d] <= 'z')
	{
		if (str[d - 1] >= '0' && str[d - 1] <= '9')
		{
		}
		else if (str[d - 1] >= 'A' && str[d - 1] <= 'Z')
		{
		}
		else if (str[d - 1] >= 'a' && str[d - 1] <= 'z')
		{
		}
		else
		{
			str[d] = str[d] - 32;
		}
	}
	return (str);
}

char		*ft_strcapitalize(char *str)
{
	int u;

	u = 0;
	ft_strlowcase(str);
	ft_sss(str, u);
	while (str[u] != '\0')
	{
		ft_dddd(str, u);
		u++;
	}
	return (str);
}
