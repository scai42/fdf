/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 22:18:15 by scai              #+#    #+#             */
/*   Updated: 2019/05/22 22:18:47 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Using a flag to keep track of whether the delimiting character has been
** encountered and already.
** Might be useful for calculating the size of arrays based on delimeters in
** puzzles etc.
*/

int		ft_strs_size(char const *s, char c)
{
	int	i;
	int size;
	int	flg;

	i = 0;
	size = 0;
	flg = 0;
	while (s[i])
	{
		if (s[i] == c)
			flg = 0;
		else if (!flg)
		{
			size += 1;
			flg = 1;
		}
		i++;
	}
	return (size);
}
