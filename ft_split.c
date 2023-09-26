/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:41:23 by mlopez-i          #+#    #+#             */
/*   Updated: 2023/07/14 17:53:18 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Counts the total number of words
int	ft_countwords(char const *s, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
			words++;
		while (s[i] != c && s[i])
			i++;
		if (s[i])
			i++;
	}
	return (words);
}

// Frees things :D
char	**ft_freesplit(char **res, int word)
{
	int	i;

	i = 0;
	while (i < word)
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

// Separates string *s in words and returns them on the string **res
char	**ft_allocatewords(char const *s, char **res, char c, int word)
{
	int	i;
	int	start;

	i = 0;
	start = -1;
	while (s[i])
	{
		if (s[i] != c)
			start = i;
		while (s[i] != c && s[i])
			i++;
		if (start != -1)
		{
			res[word] = ft_substr(s, start, i - start);
			if (!res[word])
				return (ft_freesplit(res, word));
			word++;
			start = -1;
		}
		if (s[i])
			i++;
	}
	res[word] = NULL;
	return (res);
}

// Splits the string in substrings using the character "c"
char	**ft_split(char const *s, char c)
{
	int		words;
	char	**res;
	int		currword;

	currword = 0;
	words = ft_countwords(s, c);
	res = (char **)malloc((words + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	return (ft_allocatewords(s, res, c, currword));
}
