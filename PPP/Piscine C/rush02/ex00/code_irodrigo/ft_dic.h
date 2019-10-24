/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dic.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 17:12:53 by irodrigo          #+#    #+#             */
/*   Updated: 2019/10/19 17:18:37 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICCIONARIO_H
#define DICCIONARIO_H

typedef struct pairs
typedef struct dictionary

struct pairs
{
	const char key;
	const char value;
}

struct dictionary
{
	pair ** elements;
	int length;
}

#endif 
