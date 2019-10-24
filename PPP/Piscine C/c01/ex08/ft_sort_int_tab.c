/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-dios <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 22:53:21 by vde-dios          #+#    #+#             */
/*   Updated: 2019/10/14 04:47:07 by vde-dios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int aux;
	int exit;

	i = 0;
	exit = 0;
	while (exit != size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			aux = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = aux;
			exit = 0;
		}
		if (i < size - 2)
			i++;
		else
			i = 0;
		exit++;
	}
}
