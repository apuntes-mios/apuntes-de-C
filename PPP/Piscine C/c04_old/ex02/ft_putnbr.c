/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-dios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 21:53:15 by vde-dios          #+#    #+#             */
/*   Updated: 2019/10/16 21:56:35 by vde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check_sign(long *nb)
{
	if (*nb < 0)
	{
		write(1, "-", 1);
		*nb = -*nb;
	}
}

void	ft_putnbr(int nb)
{
	long int	div_10;
	long int	aux_nb;
	long int	num;

	aux_nb = nb;
	check_sign(&aux_nb);
	num = aux_nb;
	div_10 = 1;
	while (num > 0)
	{
		div_10 = div_10 * 10;
		num = num / 10;
	}
	if (nb != 0)
		div_10 = div_10 / 10;
	while (div_10 > 0)
	{
		num = aux_nb / div_10 + 48;
		write(1, &num, 1);
		aux_nb = aux_nb - (aux_nb / div_10) * div_10;
		div_10 = div_10 / 10;
	}
}
