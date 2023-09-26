/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 20:24:13 by mlopez-i          #+#    #+#             */
/*   Updated: 2023/07/14 14:11:55 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Concatenates s1 and s2 in a nuew string (malloc)
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*res;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (s1len + s2len + 1));
	if (!res)
		return (NULL);
	ft_memmove(res, (char *)s1, s1len + 1);
	ft_strlcat(res, (char *)s2, s1len + s2len + 1);
	return (res);
}
