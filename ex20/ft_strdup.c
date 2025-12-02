/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:27:05 by lwoo              #+#    #+#             */
/*   Updated: 2025/08/27 00:59:15 by lwoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*res;

	len = ft_strlen(src);
	res = (char *) malloc (len * sizeof (char));
	i = 0;
	while (i < len)
	{
		res[i] = src[i];
		i++;
	}
	res[i] = 0;
	return (res);
}
