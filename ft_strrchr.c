#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	i = ft_strlen(s);
	str = (char *)s;
	while (i >= 0)
	{
		if (s[i] == c)
			return (&str[i]);
		i--;
	}
	return (0);
}
