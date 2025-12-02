/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:56:56 by lwoo              #+#    #+#             */
/*   Updated: 2025/08/27 01:02:55 by lwoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	arr = (int *) malloc ((max - min) * sizeof(int));
	if (min >= max)
		return (NULL);
	while (min != max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
