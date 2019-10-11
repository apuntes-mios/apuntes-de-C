/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts_non_printable.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-dios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:42:02 by vde-dios          #+#    #+#             */
/*   Updated: 2019/10/11 14:45:34 by vde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex(char c)
{
	char div;
	char mod;

	div = c / 16 + '0';
	mod = c % 16;
	if(mod > 9)
		mod = mod - 10 + 'a';
	else
		mod = mod + '0';

	write(1, "\\", 1);
	write(1, &div, 1);
	write(1, &mod, 1);
}

void	ft_puts_non_printable(char *str)
{
	int i;
	char cad;

	i = 0;
	while(str[i])
	{
		if((str[i] < 32 && str[i] != '\0') || str[i] ==  127)
			ft_print_hex(str[i]);
		else 
			write(1, &str[i], 1);
		i++ ;	
	}
}
