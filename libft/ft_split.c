/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarco <smarco@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:15:07 by smarco            #+#    #+#             */
/*   Updated: 2022/10/12 15:56:07 by smarco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			words++;
			i++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (words);
}

static int	size_words(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

static void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

static char	**fill_split(char **split, char const *s, char c, int words)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = -1;
	while (++j < words)
	{
		while (s[i] == c)
			i++;
		size = size_words(s, c, i);
		split[j] = ft_substr(s, i, size);
		if (!split[j])
		{
			free_split(split);
			return (NULL);
		}
		i = i + size;
	}
	split[j] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		words;

	words = count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	return (fill_split(split, s, c, words));
}
/*
int main()
{
	char **array;
	char const s[] = "coucou!";
	char c = ' ';
	int i = 0;
	printf("s: %s\nc: %c\n", s, c);
	array = ft_split(s, c);
	printf("result: %d\n", **ft_split(s, c));
	while (i < 3)
	{
		printf("mot [%d] = %s\n", i, array[i]);
		i++;
	}
}*/
