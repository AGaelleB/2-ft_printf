/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnefo <abonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:28:26 by abonnefo          #+#    #+#             */
/*   Updated: 2022/12/02 10:52:16 by abonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// %c Affiche un seul caractère.

#include "ft_printf.h"

int	ft_print_c(int c)
{
	write(1, &c, 1);
	return (1);
}
