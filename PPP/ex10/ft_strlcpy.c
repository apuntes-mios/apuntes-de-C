/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-dios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:13:02 by vde-dios          #+#    #+#             */
/*   Updated: 2019/10/11 12:38:45 by vde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while(src[i])
		i++ ;
	while(j < size)
	{
		if(j < size -1)
			dest[j] = src[j];
		else
			dest[j] = '\0';
		j++ ;
	}
	return i;
}
