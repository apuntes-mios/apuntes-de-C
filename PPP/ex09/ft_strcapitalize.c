/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-dios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 22:30:24 by vde-dios          #+#    #+#             */
/*   Updated: 2019/10/10 23:05:09 by vde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			if(i == 0)
				str[i] = str[i] - 32;
			else if((str[i - 1] < 'a' || str[i - 1] > 'z') && (str[i - 1] < 'A' || str[i - 1] > 'Z'))
			   str[i] = str[i] - 32;
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
		   	if((i != 0) && (str[i - 1] >= 'a' || str[i - 1] <= 'z') && (str[i - 1] >= 'A' || str[i - 1] <= 'Z'))
				str[i] = str[i] + 32;
		}
		i++ ;
	}
	return str;
}
