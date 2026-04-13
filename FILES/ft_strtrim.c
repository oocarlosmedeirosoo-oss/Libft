/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbosa <cbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:27:28 by cbarbosa          #+#    #+#             */
/*   Updated: 2026/04/09 18:07:50 by cbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strtrim(char *str)
{
	char	*new;
	int		size;
	int		end;
	int		start;
	int		i;

	start = 0;
	while (str[start] == 32 || (str[start] >= 9 && str[start] <= 13))
		start++;
	end = ft_strlen(str) - 1;
	while (end > start && (str[end] == 32 || (str[end] >= 9 && str[end] <= 13)))
		end--;
	size = end - start +1;
	new = malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (i < size)
	{
		new[i] = str[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
