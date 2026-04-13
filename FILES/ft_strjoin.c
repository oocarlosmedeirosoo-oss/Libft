/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbosa <cbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:26:48 by cbarbosa          #+#    #+#             */
/*   Updated: 2026/04/09 18:03:20 by cbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char *dest, char *src)
{
	int		i;
	int		j;
	int		size;
	char	*new;

	if (!dest || !src)
		return (NULL);
	size = (ft_strlen(dest) + ft_strlen(src));
	new = malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	while (dest[i])
		new[j++] = dest[i++];
	i = 0;
	while (src[i])
		new[j++] = src[i++];
	new[j] = '\0';
	return (new);
}
