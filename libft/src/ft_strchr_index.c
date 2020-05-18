/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccliffor <ccliffor@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 13:01:52 by ccliffor          #+#    #+#             */
/*   Updated: 2020/05/18 14:40:17 by ccliffor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strchr_index(const char *s, int c) {
	int	i;

	if (!c) {
		return -1;
	}
	i = 0;
	while (s[i] != c) {
		if (s[i] == '\0')
			return -1;
		i++;
	}
	return i;
}