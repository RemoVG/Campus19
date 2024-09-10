//#include<unistd.h>

void	ft_swap(int  *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
int	main(void)
{
	int a;
	int b;

	a = 1;
	b = 2;
	printf("before: %D %D\n", a, b);
	ft_swap(&a, &b);
	printf0("before: %d %\n", a, b);
}
