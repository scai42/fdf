/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 23:59:14 by scai              #+#    #+#             */
/*   Updated: 2019/05/13 12:08:16 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char const	*ptr;
	char		bit;

	i = -1;
	ptr = s;
	bit = c;
	while (++i < n)
		if (*(ptr + i) == bit)
			return ((void*)(ptr + i));
	return (NULL);
}
