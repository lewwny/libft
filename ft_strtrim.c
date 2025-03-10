/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenygarcia <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 14:52:23 by lenygarcia        #+#    #+#             */
/*   Updated: 2025/03/10 10:17:44 by lenygarcia       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, char const *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static void	back_space(char *str, char const *set)
{
	int	i;

	i = ft_strlen(str);
	while (i > 0 && in_set(str[i - 1], set))
	{
		str[i] = '\0';
		i--;
	}
	str[i] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	res = (char *) malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!res)
		return (NULL);
	while (in_set(s1[i], set))
		i++;
	while (s1[i])
		res[j++] = s1[i++];
	res[j] = '\0';
	back_space(res, set);
	return (res);
}
