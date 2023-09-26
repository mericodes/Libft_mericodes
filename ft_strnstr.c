/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:21:57 by mlopez-i          #+#    #+#             */
/*   Updated: 2023/09/26 20:53:08 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// If needle is an empty string, haystack is returned; if needle occurs
// nowhere in haystack, NULL is returned; otherwise a pointer to the first
// character of the first occurrence of needle is returned.
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j]
			&& needle[j] != '\0' && i + j < len)
		{
			j++;
			if (needle[j] == '\0')
				return (&((char *)haystack)[i]);
		}
		i++;
	}
	return (NULL);
}
