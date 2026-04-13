/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbosa <cbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:27:11 by cbarbosa          #+#    #+#             */
/*   Updated: 2026/04/09 17:36:30 by cbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_strncmp(char *str1, char *str2, int n)
{
	int	i;

	if (!str1 || !str2)
		return (0);
	i = 0;
	while (i < n && (str1[i] && str2[i] && str1[i] == str2[i]))
		i++;
	if (i == n)
		return (0);
	return (str1[i] - str2[i]);
}
