/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_to_dec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccliffor <ccliffor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 11:40:41 by ccliffor          #+#    #+#             */
/*   Updated: 2018/08/10 12:15:35 by ccliffor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	hex_to_dec(const char *s)
{
	int	n;

	n = 0;
	while (*s)
	{
		if (ft_isdigit(*s))
			n = n * 16 + (*s++ - '0');
		else if (ft_isalpha(*s))
			n = n * 16 + (ft_tolower(*s++) - 'a' + 10);
		else
			break;
	}
	return (n);
}