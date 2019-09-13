/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 23:55:07 by scai              #+#    #+#             */
/*   Updated: 2019/08/12 15:04:11 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static size_t	ft_strcspn(const char *s, const char *charset)
{
	size_t	pos;

	pos = 0;
	while (!(ft_strchr(charset, *s++)))
		pos++;
	return (pos);
}

static int		bool_nl(char **ftable, char **line, int fd)
{
	char	*fheap;

	if (!*ftable[fd])
		return (NO_NL_IE_CR_OR_EOT);
	if (ft_strchr(ftable[fd], 10))
	{
		*(ftable[fd] + ft_strcspn(ftable[fd], "\n")) = '\0';
		*line = ft_strdup(ftable[fd]);
		fheap = ft_strdup(ft_strchr(ftable[fd], (char)0) + sizeof(char));
		free(ftable[fd]);
		ftable[fd] = ft_strdup(fheap);
		free(fheap);
	}
	else
	{
		*line = ft_strdup(ftable[fd]);
		ft_memset((void *)ftable[fd], 0, ft_strcspn(ftable[fd], "\n")
				+ sizeof(char));
	}
	return (NL_FOUND);
}

int				get_next_line(const int fd, char **line)
{
	char		fstack[BUFF_SIZE + sizeof(char)];
	char		*fheap;
	static char	*ftable[FT_SET];
	int			floop;

	ERR_HAND(!(fd < 0 || fd >= FT_SET || BUFF_SIZE < 0 || !line
				|| read(fd, 0, 0) == -1));
	if (!(ftable[fd]))
		ftable[fd] = ft_strnew(0);
	while (!(ft_strchr(ftable[fd], 10)))
	{
		floop = read(fd, fstack, BUFF_SIZE);
		fstack[floop] = (char)0;
		if (floop == 0)
			break ;
		fheap = ftable[fd];
		ftable[fd] = ft_strjoin(fheap, fstack);
		free(fheap);
	}
	return (bool_nl(ftable, line, fd));
}
