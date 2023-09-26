/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:22:31 by mlopez-i          #+#    #+#             */
/*   Updated: 2023/07/14 14:10:51 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strdup() function allocates sufficient memory for a copy of the
// string s1, does the copy, and returns a pointer to it.
char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		i;

	i = 0;
	dup = (char *)malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (!dup)
		return (NULL);
	while (s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
