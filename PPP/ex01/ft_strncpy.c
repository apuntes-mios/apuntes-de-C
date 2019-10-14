/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-dios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:53:55 by vde-dios          #+#    #+#             */
/*   Updated: 2019/10/14 21:56:49 by vde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*s;
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = n;
	s = dest;
	while (src[i] != '\0')
		i++;
	while (n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	while (l < i)
	{
		*dest++ = '\0';
		l++;
	}
	return (s);
}
