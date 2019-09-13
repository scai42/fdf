/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err_prog.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 18:49:32 by scai              #+#    #+#             */
/*   Updated: 2019/08/16 18:50:20 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft.h"

void    err_prog(char *file, int type, char *note)
{
        if (type == 0)
        {
                ft_putstr("usage: ");
                ft_putstr(file);
                ft_putstr(note);
        }
        if (type == 1)
                ft_putstr(note);
        write(1, "\n", 1);
        exit(1);
}
