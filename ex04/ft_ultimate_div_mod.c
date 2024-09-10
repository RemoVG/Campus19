#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;

}

/*
int		main(void)
{
	int a;
	int b;

	a = 20;
	b = 4;
	ft_ultimate_div_mod(&a, &b);
	printf("div %d, left %d", a, b);
}
*/
