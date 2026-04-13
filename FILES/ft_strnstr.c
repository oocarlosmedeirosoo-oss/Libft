/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbosa <cbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:27:17 by cbarbosa          #+#    #+#             */
/*   Updated: 2026/04/09 17:58:22 by cbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(char *str, char *str2, int n)
{
	int		i;
	char	*new;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		if (str[i] == str2[i])
		{
			new[i] = str;
			i++;
		}
	}
	new[i] = '\0';
	return (new);
}
