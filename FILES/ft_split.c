/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbosa <cbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:26:25 by cbarbosa          #+#    #+#             */
/*   Updated: 2026/04/09 18:10:36 by cbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static	int	ft_count_words(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c && (i == 0 || str[i - 1] == c))
			count ++;
		i++;
	}
	return (count);
}

static	char	*ft_get_word(char const *s, int len)
{
	int		i;
	char	*new;

	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		len;
	char	**new;

	new = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (s[len] && s[len] != c)
				len++;
			new[i] = ft_get_word(s, len);
			s = s + len;
			i++;
		}
		else
			s++;
	}
	new[i] = (NULL);
	return (new);
}
