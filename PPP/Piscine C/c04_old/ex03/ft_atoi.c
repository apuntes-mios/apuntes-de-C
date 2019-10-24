/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-dios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 21:57:37 by vde-dios          #+#    #+#             */
/*   Updated: 2019/10/21 13:21:28 by vde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>


void	ft_signo(char str, int *zona, int *signo, int *boom)
{
	if(str == '-' || str == '+')
		if (*signo < 2)
			*signo = *signo + 1;
		else
			*signo = 0;
	else
	{
		*zona = 2; 
		*boom = 1;
	}
}

void	ft_isspace(char str, char *zona, char *boom)
{
	if (!(str == '\t' || str == '\n' || str == '\v'
			|| str == '\f' || str == '\r' || str == ' '))
		*boom = 1;
	else 
		*boom = 0;
}

void ft_number(char str, int *zona, int *signo, int *boom)
{
	if (!(str >= '0' && str <= '9'))
		*boom = 1;
	else
	{ 
		if (*signo == 1)
		{
			write( 1, "-", 1);
			*signo = 0;
		}
		else
			write(1, &str, 1);
		*boom = 0;
	}
}

int ft_atoi(char *str)
{
	int i;
	int zona;
	int boom;
	
	boom = 0;
	zona = 0;
	signo = 0;
	i = 0;
	while (str[i])
	{
		if (zona < 1)
			ft_isspace(str[i], &zona, &boom);
		else if (zona < 2)
			ft_signo(str[i], &zona, &signo, &boom);
		else if (zona < 3)
			ft_number(str[i], &zona, &signo, &boom)
		else if (boom == 1)
			break;
		i++;
	}
}

int main()
{
	char str[] = "--+-12122";
	int a;

	ft_atoi(str);
//	a= atoi(str);
//	printf("%d", a);
	return 0;
}
