/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:38:33 by mlopez-i          #+#    #+#             */
/*   Updated: 2023/07/14 14:15:15 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Returns a substring starting from "start" and with length "len"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			slen;
	char			*res;

	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (start + len > slen)
		len = slen - start;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len && s[i + start])
	{
		res[i] = s[i + start];
		i++;
	}
	res[i] = '\0';
	return (res);
}
