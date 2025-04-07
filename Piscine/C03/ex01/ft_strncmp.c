int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i= 0;

	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
		{
			return (unsigned char)s1[i] - (unsigned char)s2[i];
		}
		i++;
	}
	return 0;
}
/*
#include <stdio.h>

int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hellp";
    unsigned int n = 4;

    int result1 = ft_strncmp(str1, str2, n);
    if (result1 == 0)
        printf("First %u characters of '%s' and '%s' are equal.\n", n, str1, str2);
    else
        printf("First %u characters of '%s' and '%s' are not equal. Result: %d\n", n, str1, str2, result1);

    int result2 = ft_strncmp(str1, str3, n);
    if (result2 == 0)
        printf("First %u characters of '%s' and '%s' are equal.\n", n, str1, str3);
    else
        printf("First %u characters of '%s' and '%s' are not equal. Result: %d\n", n, str1, str3, result2);

    unsigned int n2 = 6;
    int result3 = ft_strncmp(str1, str3, n2);
    if (result3 == 0)
        printf("First %u characters of '%s' and '%s' are equal.\n", n2, str1, str3);
    else
        printf("First %u characters of '%s' and '%s' are not equal. Result: %d\n", n2, str1, str3, result3);

    return 0;
}
*/
