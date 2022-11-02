int	ft_strequ(char const *s1, char const *s2)
{
	int	i;

	i = 0;
	while(s1[i] == s2[i] && s1[i] && s2[i])
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (1);
	else
		return (0);
}
