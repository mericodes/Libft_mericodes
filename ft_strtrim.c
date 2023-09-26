/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:55:53 by mlopez-i          #+#    #+#             */
/*   Updated: 2023/07/14 14:15:12 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Trims string s1 from start and end with the chars on string set and returns a
// new string (with malloc)
char	*ft_strtrim(char const *s1, char const *set)
{
	int		startlen;
	int		endlen;

	if (!s1 || !set)
		return (NULL);
	startlen = 0;
	endlen = ft_strlen(s1);
	while (s1[startlen] && ft_strchr(set, s1[startlen]))
		startlen++;
	while (endlen > startlen && ft_strchr(set, s1[endlen - 1]))
		endlen--;
	return (ft_substr(s1, startlen, endlen - startlen));
}
