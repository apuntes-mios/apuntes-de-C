

int	ft_sqrt(int nb)
{	
	int sq;

	sq = 0;
	if (nb == 1)
		return 1;
	else if (nb == 4)
		return 2;
	else if (nb == 9)
		return 3;
	else if (nb == 25)
		return 5;
	else if (nb == 36)
		return 6;
	else if (nb == 49)
		return 7;
	else if (nb == 64)
		return 8;
	while(sq <= nb / 4)
	{
		if(nb == sq * sq)
			return (sq);
		else
			sq++;
	}
	return (0);
}
