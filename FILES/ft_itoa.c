/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbosa <cbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:25:21 by cbarbosa          #+#    #+#             */
/*   Updated: 2026/04/09 18:12:15 by cbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static	int	ft_count(int n)
{
	int	count;

	if (n < 0)
		count = 1;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*new;
	int		i;
	int		negative;

	if (n < 0)
		negative = 1;
	new = malloc(sizeof(char) * (ft_count(n) + 1));
	if (!new)
		return (NULL);
	i = ft_count(n);
	new[i] = '\0';
	i--;
	while (n != 0)
	{
		new[i] = (n % 10) + '0';
		if (n % 10 < 0)
			new[i] = -(n % 10) + '\0';
		n /= 10;
		n--;
	}
	if (negative)
		new[0] = '-';
	return (new);
}
