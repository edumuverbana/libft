/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurmus <edurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:59:00 by edurmus           #+#    #+#             */
/*   Updated: 2023/01/30 13:59:01 by edurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int a, size_t byte)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)ptr;
	while (i < byte)
	{
		str[i] = a;
		i++;
	}
	return (ptr);
}
