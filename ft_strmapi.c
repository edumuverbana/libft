/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurmus <edurmus@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:57:40 by edurmus           #+#    #+#             */
/*   Updated: 2023/01/30 13:57:42 by edurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	i;

	if (!s)
		return (0);
	new_str = (char *)malloc (ft_strlen(s) + 1);
	if (!new_str)
		return (0);
	i = 0;
	while (i < ft_strlen(s))
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/*char	test(unsigned int i, char c)
{
	i = 0;
	return (c - 32);
}

int	main()
{
	printf("%s\n", ft_strmapi("abc", test));
}*/