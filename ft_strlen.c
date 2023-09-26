/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:17:57 by mlopez-i          #+#    #+#             */
/*   Updated: 2023/09/26 20:49:36 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns the length of the string s
size_t	ft_strlen(const char *s)
{
	size_t	size;

	if (!s)
		return (0);
	size = 0;
	while (s[size])
		size++;
	return (size);
}
