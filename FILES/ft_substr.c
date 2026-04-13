/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbosa <cbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:27:33 by cbarbosa          #+#    #+#             */
/*   Updated: 2026/04/09 18:02:22 by cbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strsub(char *str, int start, int length)
{
	char	*cut;
	int		i;

	if (!str)
		return (NULL);
	cut = malloc(sizeof(char) * (length + 1));
	if (!cut)
		return (NULL);
	i = 0;
	while (i < length)
	{
		cut[i] = str[start + i];
		i++;
	}
	cut[i] = '\0';
	return (cut);
}
