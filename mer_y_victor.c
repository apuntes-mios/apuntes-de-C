/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mer_y_victor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-dios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 21:16:59 by vde-dios          #+#    #+#             */
/*   Updated: 2019/10/08 22:24:44 by vde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	int num[9];
	int n;
	int i;

	i = 0;
	n = 3;
	/*while(i < n) 
		num[i++] = i;
	i = n - 1;*/
	num[0] = 0;
	while(num[0] <= 10 - n)
	{
		if(num[i] <= 10 - n + i)
		{
			if(i ==  n-1)
			{
				printf("%d",num[0]);
				printf("%d",num[1]);
				printf("%d",num[2]);
				printf("%d, ",num[3]);
				num[i]++ ;
			}
			else 
			{
				num[i]++ ;
				while( i <  n - 1)
				{
					i++ ;
					num[i] = num[i - 1] + 1;
				}
			}
		}
		else 
			i-- ;
	}
}
