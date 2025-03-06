/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenygarcia <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 18:16:35 by lenygarcia        #+#    #+#             */
/*   Updated: 2025/03/06 18:40:58 by lenygarcia       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int	i;

	i = 0;
	while (i < len && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
		dst[i++] = '\0';
	dst[i] = '\0';
	return (dst);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	printf("%s", ft_strncpy(argv[1], argv[2], 5));
	return (0);
}*/
