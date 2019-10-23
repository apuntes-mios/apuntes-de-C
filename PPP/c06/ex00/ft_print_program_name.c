
#include <unistd.h>

/*Tiene que tener un salto de linea?*/

int main(int argc, char **argv)
{
	int i;
	(void) argc;
	
	i = 0;
	while(argv[0][i])
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	return (0);
}
