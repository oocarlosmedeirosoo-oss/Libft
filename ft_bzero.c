/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbosa <cbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 20:00:33 by cbarbosa          #+#    #+#             */
/*   Updated: 2026/04/16 20:34:16 by cbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
	return ;
}

int main(void)
{
	char str[10] = "Medeiros";
	size_t	i;

	printf("Antes da funcao bzero: %s\n", str);
	ft_bzero(str, 4);
	printf("Depois da funcao Teste1: %s\n", str);
	printf("Depois da funcao Teste2: %s\n", str + 4);
	printf("Conteúdo numérico de todo o buffer:\n");
	i = 0;
	while (i < 10)
	{
		printf("[%zu]: %d\n", i, str[i]); // Supostamente o valor ASCII de cada posição
		i++;
	}
	return (0);
}