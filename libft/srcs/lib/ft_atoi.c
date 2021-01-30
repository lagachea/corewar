/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 14:29:58 by alagache          #+#    #+#             */
/*   Updated: 2020/02/14 19:05:17 by alagache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** takes a string
** return the number represented inside the string
*/

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	v;

	v = 0;
	i = 0;
	s = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\n')
		i++;
	if (str[i] == '-')
		s = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] <= '9' && str[i] >= '0' && str[i])
	{
		v = v * 10 + str[i] - '0';
		i++;
	}
	return (s * v);
}
