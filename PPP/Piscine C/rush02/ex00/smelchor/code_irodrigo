/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_are_valid.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smelchor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:37:58 by smelchor          #+#    #+#             */
/*   Updated: 2019/10/20 09:43:45 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isnumber(char *str)
{
	if (*str == 0)
		return (0);
	while (*str != 0)
	{
		if (*str == '-')
			return (0);
		else if ('0' <= *str && *str <= '9')
			str++;
		else
			return (0);
	}
	return (1);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != 0)
	{
		str++;
		i++;
	}
	return (i);
}

int ft_isdict(char *str)
{
	int i;
	int len;

	len = ft_strlen(str);
	i = len;
	if (*str == 0 || len  <= 5)
		return (0);
	while (i > 0)
	{
		i--;
		if ((i = (len - 1)) && (str[i] != 't'))
			return (0);
		else if ((i = (len - 2)) && (str[i] != 'c'))
			return (0);
		else if ((i = (len - 3)) && (str[i] != 'i'))
			return (0);
		else if ((i = (len - 4)) && (str[i] != 'd'))
			return (0);
 		else if ((i = (len - 5)) && (str[i] != '.'))
			return (0);
		else
			return (1);
	}
	return (1);
}

int	ft_error(int count, char **value)

{
	if (count == 2)
	{
		if (ft_isnumber(value[1]) == 0)
			return (0);
		return (1);
	}
	else if (count == 3)
	{
		if (ft_isnumber(value[2]) == 0)
			return (0);
		if (ft_isdict(value[1]) == 0)
			return (0);
		return (2);
	}
	else
		return (0);
}
