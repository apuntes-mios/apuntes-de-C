#include<stdio.h>
#include<string.h>

void ft_puts_non_printable(char *dest);

int main()
{
	char source[] = "hola\nloco"; 

	ft_puts_non_printable(source);
	return 0;
}
