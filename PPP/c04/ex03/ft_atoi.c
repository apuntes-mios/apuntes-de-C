/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-dios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 21:57:37 by vde-dios          #+#    #+#             */
/*   Updated: 2019/10/19 13:07:08 by vde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

void	ft_isspace(char str, int *zona, int *i)
{
		if (!(str == '\t' || str == '\n' || str == '\v'
			|| str == '\f' || str == '\r' || str == ' '))
			*zona = 2;
		else
			*i = *i + 1;
}

void	ft_signo(char str, int *zona, int *signo, int *i)
{
		if(str == '-' || str == '+')
		{
			if (*signo < 1 && str == '-')
				*signo = *signo + 1;
			else if(str == '-')
				*signo = 0;
			*i = *i + 1;
		}
		else
			*zona = 3; 
}

int	ft_number(char str, int *zona, int *i)
{
		if (str < '0' || str > '9')
		{
			*zona = 4;
			return 0;
		}
		else
		{
			*i = *i + 1;
			return str - '0';
		}
}

int	ft_atoi(char *str) //cambiar a return int
{
	int i;
	int zona;
	int signo;
	int num; 

	num = 0;
	zona = 1;
	signo = 0;
	i = 0;
	while (str[i]) 
	{
		if (zona == 1)
			ft_isspace(str[i], &zona, &i);
		else if (zona == 2)
			ft_signo(str[i], &zona, &signo, &i);
		else if (zona == 3)
			num = num*10 + ft_number(str[i], &zona, &i);
		else
			break;
	}
	if (signo == 1)
		return -num;
	else
		return num;
}

int main()
{
	char str[]= "++--- 012345";
	int a;

//	ft_atoi(str);
//	a= atoi(str);
	printf("%d", ft_atoi(str));
	return 0;
}
