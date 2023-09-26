/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:03:35 by mlopez-i          #+#    #+#             */
/*   Updated: 2023/09/26 20:54:38 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Counts the number of digits integer n has
int	ft_countdigits(int n)
{
	int	count;

	if (n == 0)
		return (1);
	if (n < 0)
		count = 1;
	else
		count = 0;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

// Converts an integer to a string
char	*ft_itoa(int n)
{
	char		*res;
	int			len;
	int			min;
	long int	num;

	min = 0;
	num = n;
	len = ft_countdigits(n);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (num < 0)
	{
		res[0] = '-';
		num = -num;
		min = 1;
	}
	res[len] = 0;
	while (len - 1 >= min)
	{
		res[len - 1] = num % 10 + 48;
		num /= 10;
		len--;
	}
	return (res);
}
