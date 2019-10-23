
int	ft_iterative_factorial(int nb)
{
	int fact;

	fact = nb;
	while (nb > 1)
	{
		nb--;
		fact = fact * nb;
	}
	return	fact;
}
