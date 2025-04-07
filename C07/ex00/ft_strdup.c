#include<stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	int	len;
	char	*str;

	len = 0;
	while (src[len])
		len++;
	str  = (char*)malloc(sizeof(*str) * (len +1));
	i = -1;
	while (++i < len)
		str[i] = src[i];
	return (str);
}
