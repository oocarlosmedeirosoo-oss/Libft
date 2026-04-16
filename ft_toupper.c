/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbosa <cbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 20:27:43 by cbarbosa          #+#    #+#             */
/*   Updated: 2026/04/16 18:09:17 by cbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/*int main(void)
{
	int x;

	printf ("%c\n", x = ft_toupper('a'));
	printf ("%d\n", x = ft_toupper('a'));
	
	return (0);//simplesmente boa pratica;
}*/
/* A funcao em si transforma caracteres entre a-z em maiusculas.
Conceitos:
Tabela ASCII - Maniulacao de Caracteres*/