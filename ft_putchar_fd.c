/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:48:00 by mlopez-i          #+#    #+#             */
/*   Updated: 2023/07/14 14:09:15 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Writes a char in the selected file descriptor
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
