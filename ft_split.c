/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbosa <cbarbosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 20:11:18 by cbarbosa          #+#    #+#             */
/*   Updated: 2026/04/16 20:20:08 by cbarbosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_count_words(const char  *str, char c)
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

static char *ft_get_word(const char *str, char c)
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
	while (x >= 0)
	{
		free(new[x]);
		x--;
	}
	free(new);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	size_t	i;
	size_t	words;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	new = malloc(sizeof(char *) * (words + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s && *s == c)
			s++;
		new[i] = ft_get_word(s, c);
		if (!new)
			return (ft_free(new, i), NULL);
		while (*s && *s != c)
			s++;
		i++;
	}
	new[i] = NULL;
	return (new);
}

/*int main(void)
{
	const char *str = "Carlos Alberto Barbosa De Medeiros";
	int x;
	char c = ' ';
	char *getWord;
	char	**new;
	int i;

	printf ("%d\n", x = ft_count_words(str, c));
	printf ("%s\n", getWord = ft_get_word(str, c));
	printf ("%s\n", getWord = ft_get_word(str + 7, c));
	
	i = 0;
	printf("\n--- Teste do ft_split ---\n");
	new = ft_split(str, c);
	if (new)
	{
		while (new[i] != NULL)
		{
			printf("Posicao [%d]: %s\n", i, new[i]);
			free(new[i]);
			i++;
		}
		free(new);
	}	
	return (0);
}*/