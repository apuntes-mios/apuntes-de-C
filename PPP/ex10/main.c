#include<stdio.h>
#include<string.h>

int ft_strcapitalize(char *str);

int main()
{
	char source[] = "AB cd $·sdf"; 
	int i;

	i = 0;

	ft_strcapitalize(source);
	while(source[i])
	{
		printf("%c",source[i]);
		i++ ;
	}
		return 0;
}
