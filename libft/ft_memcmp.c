/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 17:59:55 by scai              #+#    #+#             */
/*   Updated: 2019/05/22 21:28:21 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Converting bit-fields to byte-sized variables (unsigned chars c)
** First checking if parameters exist
** Using n as counter
*/

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	unsigned char	c1;
	unsigned char	c2;

	if ((!s1 && !s2) || n == 0)
		return (0);
	else
	{
		p1 = (unsigned char *)s1;
		p2 = (unsigned char *)s2;
		c1 = *p1;
		c2 = *p2;
		while (c1 == c2 && (n-- > 0))
		{
			c1 = *p1++;
			c2 = *p2++;
		}
	}
	return (c1 - c2);
}
