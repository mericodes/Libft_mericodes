/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:19:09 by mlopez-i          #+#    #+#             */
/*   Updated: 2023/09/26 20:55:05 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Strlcat() appends string src to the end of dst.  It will append at most
// dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
// dstsize is 0 or the original dst string was longer than dstsize
// (in prac-tice this should not happen as it means that either dstsize is 
// incorrect or that dst is not a proper string).
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_length;
	unsigned int	src_length;

	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	i = dest_length;
	j = 0;
	if (size == 0 || size <= dest_length)
		return (src_length + size);
	while (src[j] != '\0' && j < size - dest_length - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_length + src_length);
}
