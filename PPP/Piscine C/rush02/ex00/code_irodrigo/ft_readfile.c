/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 17:07:43 by irodrigo          #+#    #+#             */
/*   Updated: 2019/10/19 22:08:17 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "speling.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

#define max 100

struct pair
{
	int key;
	char value[max];
};

void ft_readfile(char *data)
{
	int fdesc;
	ssize_t nr_bytes;
	int size;
	char string[100];
	//struct pair a[max];
	
	if (data[0] == '\0')
		fdesc = open ("./numbers.dict", O_RDONLY);
	else
		fdesc = open (data, O_RDONLY);

	if (fdesc==-1)
		write(1, "Error: wrong file or file not exist", 35);
	else
	{
		nr_bytes = read (fdesc, &string, 1);
		size = (int) nr_bytes;
		printf ("%d", size);
		
		while (size !=0)
		{ 
			nr_bytes = read (fdesc, &string, 1);
			size = (int) nr_bytes;
			
			// ft_create_list(); // aqui comienza la función para cargar lista en nodos
			
			printf("%s", string);
			
			//size = (int) nr_bytes;
			//nr_bytes = read(fdesc, &string, 10);
		}
		close (fdesc);
	}
}

int main (int argc, char *argv[])
{
	int a;

	a = 1;
	if (a == 1)
	//if (ft_error(argc, argv) == 1)
		ft_readfile("\0");
	else if (a == 2)
	//else if (ft_error(argc, argv) == 2)
		ft_readfile(argv[1]);
	else
		write (1,"error: parameters wrong",25); // comprobar la validez de esto. 
}
