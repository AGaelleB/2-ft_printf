/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_%.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnefo <abonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:12:14 by abonnefo          #+#    #+#             */
/*   Updated: 2022/12/02 10:52:14 by abonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//%% Affiche un signe pourcentage.

#include "ft_printf.h"

int	ft_print_percent(void)
{
	write(1, "%", 1);
	return (1);
}
