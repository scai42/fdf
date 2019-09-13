/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 22:49:43 by scai              #+#    #+#             */
/*   Updated: 2019/05/23 16:07:25 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies n-bytes from src to dst;
** If 'c' occurs in memory in src, the process stops and the function returns a
** pointer to the byte after copying c;
** Otherwise, a NULL pointer is returned after n-bytes.
** Like w/memcpy, if the memory addresses overlap, behavior is undefined.
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	ch;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	ch = (unsigned char)c;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == ch)
			return ((void *)&d[i + 1]);
		i++;
	}
	return (NULL);
}
