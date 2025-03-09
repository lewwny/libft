/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenygarcia <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 14:52:23 by lenygarcia        #+#    #+#             */
/*   Updated: 2025/03/09 19:45:30 by lenygarcia       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	if ((c == 32) || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

static void	back_space(char *str)
{
	int	i;

	i = ft_strlen(str);
	while (i > 0 && is_space(str[i - 1]))
	{
		str[i] = '\0';
		i--;
	}
	str[i] = '\0';
}

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	res = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (NULL);
	while (is_space(s[i]))
		i++;
	while (s[i])
		res[j++] = s[i++];
	res[j] = '\0';
	back_space(res);
	return (res);
}
