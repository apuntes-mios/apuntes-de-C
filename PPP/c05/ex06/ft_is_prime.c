
int	ft_is_prime(int nb)
{
	int p;

	p = nb - 1;
	if (nb == 0)
		return (0);
	else if(nb == 1)
		return (0);
	while (p > 1)
	{
		if (nb % p == 0)
			return (0);
		p--;
	}
	return 1;	
}
