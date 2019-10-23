#include <stdio.h>

int	ft_iterative_factorial(int nb);
int	ft_recursive_factorial(int nb1);
int	ft_recursive_power(int nbr, int power);
int	ft_iterative_power(int nbr, int power);
int	ft_fibonacci(int index);
int	ft_sqrt(int nb);
int	ft_is_prime(int nb);

int main()
{
	printf("-------ex00------\nft_iterative_factorial: %d \n", ft_iterative_factorial(6));
	printf("-------ex01------\nft_recursive_factorial: %d \n", ft_recursive_factorial(6));
	printf("-------ex02------\nft_iterative_power: %d \n", ft_iterative_power(2, 3));
	printf("-------ex03------\nft_recursive_power: %d \n", ft_recursive_power(2, 3));
	printf("-------ex04------\nft_fibonacci: %d \n", ft_fibonacci(10));
	printf("-------ex05------\nft_sqrt: %d \n", ft_sqrt(214));
	printf("-------ex06------\nft_is_prime: %d \n", ft_is_prime(12));
	return 0;
}
