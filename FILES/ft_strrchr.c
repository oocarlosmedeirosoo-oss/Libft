/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbosa <cbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:27:22 by cbarbosa          #+#    #+#             */
/*   Updated: 2026/04/09 17:34:56 by cbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(char *str, int c)
{
	int	end;

	if (!str)
		return (NULL);
	end = ft_strlen(str) - 1;
	if (end < 0)
		return (NULL);
	while (str[end] != c)
		end--;
	return (str + end);
}
