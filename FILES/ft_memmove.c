/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbosa <cbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:25:45 by cbarbosa          #+#    #+#             */
/*   Updated: 2026/04/09 17:29:40 by cbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)src;
	p2 = (unsigned char *)dest;
	if (p2 > p1)
	{
		while (n > 0)
		{
			n--;
			p2[n] = p1[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
