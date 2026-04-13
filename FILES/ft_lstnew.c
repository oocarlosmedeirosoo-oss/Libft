/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbosa <cbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 18:28:16 by cbarbosa          #+#    #+#             */
/*   Updated: 2026/04/09 18:36:07 by cbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
		
	new_node->content = content;
	new_node->next = NULL;
		
		return (new_node);
}
