#include<unistd.h>
#include<string.h>

void	*ft_strcpy(char *dest, char *src)
{
	char *start = dest;

	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++
	}
	*dest = '\0';

	return start;
}
/*
int	main()
{
	char src[]= "hello world";
	char dest[50];

	ft_strcpy(dest, src);
	write("copied string: %s\n", dest);
	return 0;
}
*/

