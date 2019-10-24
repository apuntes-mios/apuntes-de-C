/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smelchor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 19:23:53 by smelchor          #+#    #+#             */
/*   Updated: 2019/10/19 19:43:50 by smelchor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_error(int count, char **value);

int main(int argc, char **argv)
{
	if (ft_error(argc,argv) == 0)
		ft_putchar(48);
	else if (ft_error(argc,argv) == 1)
		ft_putchar(49);
	else if (ft_error(argc,argv) == 2)
		ft_putchar(50);
	else
		ft_putchar(51);
	return (0);
}

