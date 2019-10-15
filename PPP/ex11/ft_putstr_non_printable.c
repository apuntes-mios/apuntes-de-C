/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts_non_printable.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-dios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:42:02 by vde-dios          #+#    #+#             */
/*   Updated: 2019/10/16 01:11:18 by vde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex(unsigned char c)
{
	if (c > 9)
		c = c - 10 + 'a';
	else
		c = c + '0';
	write(1, &c, 1);
}

void	ft_convert_hex(char div, char mod)
{
	if (div < 16)
	{
		ft_print_hex(div);
		ft_print_hex(mod);
	}
	else
	{
		ft_convert_hex(div / 16, div % 16);
		ft_print_hex(mod);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	aux;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 32 && str[i] != '\0') || str[i] > 127)
		{
			write(1, "\\", 1);
			aux = str[i];
			ft_convert_hex(aux / 16, aux % 16);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
