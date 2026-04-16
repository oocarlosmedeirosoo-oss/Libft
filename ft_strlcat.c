/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbosa <cbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 20:23:49 by cbarbosa          #+#    #+#             */
/*   Updated: 2026/04/16 17:37:07 by cbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = ft_strlen(src);
	j = 0;
	while (dst[j] && j < size)
		j++;
	if (j == size)
		return (i + size);
	k = 0;
	while (src[k] && (j + i + 1) < size)
	{
		dst[j + k] = src[k];
		k++;
	}
	dst[j + i] = '\0';
	return (j + i);
}
