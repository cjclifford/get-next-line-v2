/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccliffor <ccliffor@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 15:54:25 by ccliffor          #+#    #+#             */
/*   Updated: 2020/05/18 14:37:27 by ccliffor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"
#include "libft/includes/libft.h"

char	*join_buffers(char *b1, char *b2)
{
	char	*tmp;

	tmp = ft_strjoin(b1, b2);
	free(b1);
	return tmp;
}

char	*get_rest(char *b, int li)
{
	char	*tmp;

	tmp = ft_strsub(b, li + 1, ft_strlen(b) - li - 1);
	free(b);
	return tmp;
}

int		get_next_line(const int fd, char **line)
{
	static char	*b;
	char				rb[BUFFER_SIZE + 1] = {0};
	int					li;
	int					br;

	if (!b)
		b = ft_strnew(0);
	while (!(li = 0))
	{
		b = join_buffers(b, rb);
		if ((li = ft_strchr_index(b, '\n')) == -1 || (li > 0))
		{
			if ((br = read(fd, rb, BUFFER_SIZE)) == 0)
				break ;
			else if (br == -1)
				return -1;
			continue;
		}
		*line = ft_strsub(b, 0, li);
		b = get_rest(b, li);
		return 1;
	}
	*line = b;
	return 0;
}