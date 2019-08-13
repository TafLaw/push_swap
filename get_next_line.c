/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzeren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 11:27:39 by tmuzeren          #+#    #+#             */
/*   Updated: 2019/07/02 10:32:42 by tmuzeren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char		*a_read(int fd, char **str, char *buff)
{
	char	*temp;

	temp = ft_strjoin(str[fd], buff);
	free(str[fd]);
	return (temp);
}

int			step(int fd, int val, char **str, char **line)
{
	int		i;
	char	*temp;

	i = 0;
	while (str[fd][i] != '\n' && str[fd][i] != '\0')
		i++;
	if (str[fd][i] == '\n')
	{
		*line = ft_strsub(str[fd], 0, i);
		temp = ft_strsub(str[fd], i + 1, ft_strlen(str[fd]));
		free(str[fd]);
		str[fd] = temp;
	}
	else
	{
		if (val == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
		free(str[fd]);
	}
	return (1);
}

int			get_next_line(int fd, char **line)
{
	int			val;
	static char	*str[255];
	char		buff[BUFF_SIZE + 1];

	if (fd < 0 || !line || read(fd, buff, 0) < 0)
		return (-1);
	while ((val = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[val] = '\0';
		if (str[fd] == NULL)
			str[fd] = ft_strnew(BUFF_SIZE);
		str[fd] = a_read(fd, str, buff);
		if (ft_strchr(buff, '\n'))
			break ;
	}
	if (val == 0 && (str[fd] == NULL || str[fd][0] == '\0'))
		return (0);
	return (step(fd, val, str, line));
}
