#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef enum
{
	false = 0,
	true = 1
}	t_bool;

# define FALSE false
# define TRUE true

# define EVEN(number) (number % 2 == 0)

# define EVEN_MSG "I haven an even number of arguments. \n"
# define ODD_MSG "I have an odd number of arguments. \n"

# define SUCCES 0

#endif
