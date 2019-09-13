/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 02:03:57 by scai              #+#    #+#             */
/*   Updated: 2019/05/23 12:16:17 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 1) Using a counter (start) to keep track of starting index for each word;
** 2) Using my own function (ft_arr_size) that takes a string and a delimiting
** character, and returns an integer size. Might be useful in the future
** for calculating the size of strings based on other delimiters.
** 3) Using a flag to keep track of each word printed, and print last word
** after last delimeter (if there is one); using index and new start pointer
** to calculate length of each word for ft_strsub
*/

char	**ft_strsplit(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	split;
	size_t	start;
	int		flg;

	i = 0;
	split = 0;
	start = 0;
	flg = 0;
	if (!s || !(strs = ft_memalloc(sizeof(char *) * (ft_strs_size(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		if (s[i] == c && flg)
			strs[split++] = ft_strsub(s, start, i - start);
		if (s[i] != c && !flg)
			start = i;
		flg = (s[i] == c) ? 0 : 1;
		i++;
	}
	if (flg)
		strs[split++] = ft_strsub(s, start, i - start);
	strs[split] = 0;
	return (strs);
}
