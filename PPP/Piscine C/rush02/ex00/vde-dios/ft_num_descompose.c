/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_descompose.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-dios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 19:06:16 by vde-dios          #+#    #+#             */
/*   Updated: 2019/10/20 23:52:23 by vde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_dictionary(char *p)
{
	printf("%s ", p);
}

void	ft_power(char *num, int i, int n)
{
	char	*power;
	char	aux[2];
	int		j;

	j = 1;
	aux[0] = num[i];
	if ((num[i - 1] >= '2') || (i == 0))
		ft_dictionary(aux);
	if ((n - i) > 0)
	{
		power = malloc((n - i + 1) * 1);
		if (NULL == power)
			write(1, "-1", 2);
		else
			power[0] = '1';
		while (j <= (n - i))
			power[j++] = '0';
		power[j] = '\0';
		ft_dictionary(power);
		free(power);
	}
}

void	ft_hundred(char *num, int *i)
{
	char *hundred;
	char aux[2];

	aux[0] = num[*i];
	hundred = "100";
	ft_dictionary(aux);
	ft_dictionary(hundred);
}

void	ft_ten(char *num, int *i)
{
	char tens[3];

	if (num[*i] >= '2')
	{
		tens[0] = num[*i];
		tens[1] = '0';
		ft_dictionary(tens);
	}
	else if (num[*i] < '2')
	{
		tens[0] = num[*i];
		tens[1] = num[*i + 1];
		ft_dictionary(tens);
	}
}

char  ft_num(char *num) 
{
	int i;
	int n;

	i = 0;
	while (num[i])
		i++;
	i--;
	n = i;
	i = 0;
	while (i <= n)
	{
		if (num[i] != '0' || (n - i) % 3 == 0)//esto me fucka los 100,000
		{
			if ((n - i) % 3 == 0)
				ft_power(num, i, n);
			else if ((n - i) % 3 == 1)
				ft_ten(num, &i);
			else if ((n - i) % 3 == 2)
				ft_hundred(num, &i);
		}
		i++;
	}
	return (0);
}


int main (int argc, char **argv)
{
	(void) argc;
	ft_num(argv[1]);
	return 0;
}
