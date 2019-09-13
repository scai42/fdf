/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 12:50:14 by scai              #+#    #+#             */
/*   Updated: 2019/05/23 09:15:43 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t	i;
	size_t	len;
	int		sign;
	char	tmp[BUF_INT];
	char	*str;

	i = -1;
	len = 0;
	sign = (n < 0 ? -1 : 1);
	if (!n)
		tmp[len++] = '0';
	while (n != 0)
	{
		tmp[len] = n % 10 * sign + '0';
		n /= 10;
		len++;
	}
	if (sign == -1)
		tmp[len++] = '-';
	if (!(str = ft_strnew(len)))
		return (NULL);
	while (++i < len && str)
		str[i] = tmp[len - i - 1];
	str[i] = '\0';
	return (str);
}
