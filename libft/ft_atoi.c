/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 23:16:28 by scai              #+#    #+#             */
/*   Updated: 2019/08/19 13:29:52 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


//INT_MINT
int	ft_atoi(const char *str)
{
	int		decimal;
	int		sign;

	decimal = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		decimal = decimal * 10 + (*str - '0');
		str++;
	}
	return ((sign * decimal));
}
