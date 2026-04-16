/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbosa <cbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 16:32:00 by cbarbosa          #+#    #+#             */
/*   Updated: 2026/04/16 20:28:18 by cbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (nptr[i] == 32 && nptr[i] >= 9 || nptr[i] <= 13)
		i++;
	j = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			j = -1;
		i++;
	}
	k = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		k = (k * 10) + (nptr[i] - '0');
		i++;
	}
	return (k * j);
}

/*int main(void)
{
	int i, j, k, l;
	const char *str1 = "   -1234ab56";
	const char *str2 = "    +-+-+1166ads3656     ";
	const char *str3 = "asd1asd654asd";
	const char *str4 = "1166ads3656";

	printf("Teste 1: %d\n", i = ft_atoi(str1));
	printf("Teste 2: %d\n", j = ft_atoi(str2));
	printf("Teste 3: %d\n", k = ft_atoi(str3));
	printf("Teste 4: %d\n", l = ft_atoi(str4));
	
	return (0);
}*/