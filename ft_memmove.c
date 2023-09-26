/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:18:41 by mlopez-i          #+#    #+#             */
/*   Updated: 2023/09/26 20:53:35 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The memmove() function copies len bytes from string src to string dst
// The two strings may overlap; 
// The copy is always done in a non-destructive manner

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest < src)
	{
		i = 0;
		while (i < (int)len)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	return (dest);
}
