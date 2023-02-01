/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurmus <edurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:58:56 by edurmus           #+#    #+#             */
/*   Updated: 2023/01/30 13:58:58 by edurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (!fd)
		return ;
	write (fd, &c, 1);
}

/*#include "fcntl.h"
#include "unistd.h"
int main()
{
	int fd = open("yeni2", O_CREAT | O_RDWR | O_TRUNC);
	write(fd, "selam ben", 9);
}*/