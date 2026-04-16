/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbosa <cbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:11:27 by cbarbosa          #+#    #+#             */
/*   Updated: 2026/04/16 17:33:47 by cbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		ft_bzero(ptr, nmemb * size);
	return (ptr);
}
