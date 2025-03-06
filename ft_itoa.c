/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenygarcia <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:14:43 by lenygarcia        #+#    #+#             */
/*   Updated: 2025/03/06 20:24:39 by lenygarcia       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_put(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	str[i] = c;
	str[i + 1] = '\0';
}

static int	ft_size_int(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = n * -1;
		count++;
	}
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*res;

	res = (char *) malloc(sizeof(char) * ft_size_int(n));
	if (!res)
		return (NULL);
	if (n == -2147483648)
	{
		ft_put(res, '-');
		ft_put(res, '2');
		n = 147483648;
	}
	if (n < 0)
	{
		ft_put(res, '-');
		n = n * -1;
	}
	if (n >= 10)
	{
		ft_itoa(n / 10);
		ft_itoa(n % 10);
	}
	else
		ft_put(res, n + 48);
	return (res);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_size_int(-789));
}*/
