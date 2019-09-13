/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 15:46:27 by scai              #+#    #+#             */
/*   Updated: 2019/05/23 01:16:03 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void			*fresh;
	unsigned char	*ptr;
	size_t			i;

	fresh = malloc(sizeof(unsigned char) * size);
	if (!fresh)
		return (NULL);
	ptr = (unsigned char *)fresh;
	i = 0;
	while (i <= size)
	{
		ptr[i] = (unsigned char)0;
		i++;
	}
	return (fresh);
}
