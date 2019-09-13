/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 15:08:04 by scai              #+#    #+#             */
/*   Updated: 2019/08/10 17:12:08 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Fill an octet string (bit-field) with an octet value;
** Writes n bytes of value c (converted to bit-sized unsigned char).
** Test cases: BSIZE 0xF00; '\200'
*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*m;
	size_t				i;

	m = b;
	i = -1;
	while (++i < len)
		*(m + i) = c;
	return (b);
}
