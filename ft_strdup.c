/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenygarcia <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 18:11:06 by lenygarcia        #+#    #+#             */
/*   Updated: 2025/03/06 18:38:57 by lenygarcia       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*dup;

	size = 0;
	while (s1[size])
		size++;
	dup = (char *) malloc(sizeof(char) * size);
	if (!dup)
		return (NULL);
	size = 0;
	while (s1[size])
	{
		dup[size] = s1[size];
		size++;
	}
	dup[size] = '\0';
	return (dup);
}
