int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return *s1 - *s2;
		}
		s1++;
		s2++;
	}
	return *s1 - *s2;
}
/*
#include<stdio.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    printf("Comparing \"%s\" and \"%s\": %d\n", str1, str2, ft_strcmp(str1, str2));

    char str3[] = "World";
    char str4[] = "Word";
    printf("Comparing \"%s\" and \"%s\": %d\n", str3, str4, ft_strcmp(str3, str4));

    char str5[] = "Apple";
    char str6[] = "Banana";
    printf("Comparing \"%s\" and \"%s\": %d\n", str5, str6, ft_strcmp(str5, str6));

    char str7[] = "Test";
    char str8[] = "Testing";
    printf("Comparing \"%s\" and \"%s\": %d\n", str7, str8, ft_strcmp(str7, str8));

    return 0;
}
*/
