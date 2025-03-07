/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenygarcia <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 11:04:04 by lenygarcia        #+#    #+#             */
/*   Updated: 2025/03/07 11:12:31 by lenygarcia       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	o;
	unsigned char	d;
	size_t			size;

	i = 0;
	j = 0;
	o = 0;
	size = ft_strlen(s);
	d = (unsigned char) c;
	while (i < size + 1)
	{
		if (d == s[i])
		{
			j = i;
			o = 1;
		}
		i++;
	}
	if (o == 0)
		return (NULL);
	return ((char *) &s[j]);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("%s", ft_strrchr(argv[1], '\0'));
	return (0);
}*/
