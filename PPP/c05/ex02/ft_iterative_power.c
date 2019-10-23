

int	ft_iterative_power(int nb, int power)
{	
	int final;
	
	final = nb;
	while(power > 1)
	{
		power--;
		final = final * nb;
	}
	return (final);
}
