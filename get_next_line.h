#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#define BUFFER_SIZE 100

char	*join_buffers(char *b1, char *b2);
char	*get_rest(char *b, int li);
int		get_next_line(const int fd, char **line);

#endif