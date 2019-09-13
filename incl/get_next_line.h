/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 13:40:01 by scai              #+#    #+#             */
/*   Updated: 2019/08/16 18:02:14 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 1

# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include "libft.h"

# define FT_PRIME 1024
# define HEX_ADDR 255
# define ERRNO_RET(x) if (!x) return (-1)
# define CALLER_RET(n) (n = (n > 0) ? 1 : 0)
# define DELIM 10

int		get_next_line(const int fd, char **line);
#endif
