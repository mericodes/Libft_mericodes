/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:19:28 by mlopez-i          #+#    #+#             */
/*   Updated: 2023/07/14 14:15:24 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Converts the letter c to lower case, if possible
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
