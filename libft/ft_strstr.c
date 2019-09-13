/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 20:53:08 by scai              #+#    #+#             */
/*   Updated: 2019/05/23 15:54:42 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *hystck, const char *needl)
{
	char	*hay;
	char	*ndl;
	int		i;
	int		j;

	hay = (char *)hystck;
	ndl = (char *)needl;
	if (!ndl[0])
		return (hay);
	i = 0;
	while (hay[i])
	{
		j = 0;
		while (hay[i + j] == ndl[j] && ndl[j] && hay[i + j])
			j++;
		if (!ndl[j])
			return (hay + i);
		i++;
	}
	return (0);
}
