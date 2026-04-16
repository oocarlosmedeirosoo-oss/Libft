/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbosa <cbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 20:30:15 by cbarbosa          #+#    #+#             */
/*   Updated: 2026/04/16 18:09:21 by cbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/*int main (void)
{
	int x;

	printf ("%d\n", x = ft_tolower('A'));
	printf ("%c\n", x = ft_tolower('A'));
	
	return (0);//simplesmente boa pratica;
}*/

/* A funcao em si transforma caracteres entre A-Z em minusculas.
Conceitos:
Tabela ASCII - Maniulacao de Caracteres*/