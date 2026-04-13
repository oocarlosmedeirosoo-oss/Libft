/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbosa <cbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:26:54 by cbarbosa          #+#    #+#             */
/*   Updated: 2026/04/09 17:31:22 by cbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t n)
{
	int	i;
	int	j;

	if (!src)
		return (0);
	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (j < n - 1)
	{
		dest[i] = src[i];
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(src));
}
