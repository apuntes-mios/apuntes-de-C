/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-dios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 22:20:22 by vde-dios          #+#    #+#             */
/*   Updated: 2019/10/10 22:28:40 by vde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++ ;
	}
	return str;
}
