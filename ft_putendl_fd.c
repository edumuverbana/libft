/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurmus <edurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:58:49 by edurmus           #+#    #+#             */
/*   Updated: 2023/01/30 14:01:54 by edurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (!fd || !s)
		return ;
	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
	write (fd, &"\n", 1);
}

/*#include "fcntl.h"
#include "unistd.h"

int main()
{
	
	int fd = open("as.txt", O_CREAT | O_RDWR | O_TRUNC);
	ft_putendl_fd("SELAM",fd);
	 
}*/