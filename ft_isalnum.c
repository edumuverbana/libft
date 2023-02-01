/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurmus <edurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:01:11 by edurmus           #+#    #+#             */
/*   Updated: 2023/01/30 14:01:12 by edurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	return (ft_isdigit(a) || ft_isalpha(a));
}

/*int	main()
{
	int a;
	a = ft_isalnum(56);
	printf("%d",a);
}*/
