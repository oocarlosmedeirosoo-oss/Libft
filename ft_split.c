/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbosa <cbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 20:11:18 by cbarbosa          #+#    #+#             */
/*   Updated: 2026/04/15 22:26:36 by cbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_count(const char  *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

static char *ft_word(const char *str, char c)
{
	size_t	i;
	size_t	j;
	char	*word;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	j = 0;
	while (j < i)
	{
		word[j] = str[j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

static void ft_free(char **new, int x)
{
	while (x--)
		free(new[x]);
	free(new);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	new = malloc(sizeof(char*) * ft_count(s, c) + 1);
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i]&& s[i] == c)
			i++;
		if (s[i])
		{
			if (!(new[j] = ft_word(s + i, c)))
				return (ft_free(new, j), NULL);
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	new[j] = NULL;
	return (new);
}
