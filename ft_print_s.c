/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnefo <abonnefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:28:59 by abonnefo          #+#    #+#             */
/*   Updated: 2022/12/02 14:31:37 by abonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//%s Affiche une chaîne de caractères (telle que définie par la convention C).

#include "ft_printf.h"

int	ft_print_s(char *s)
{
	int	len;

	len = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[len])
	{
		write(1, &s[len], 1);
		len++;
	}
	return (len);
}
