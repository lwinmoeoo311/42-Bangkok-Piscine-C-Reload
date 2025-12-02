/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 14:48:59 by lwoo              #+#    #+#             */
/*   Updated: 2025/08/27 08:19:27 by lwoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb >= 0 && nb <= 12)
	{
		if (nb > 0)
			result = (nb * ft_recursive_factorial(nb - 1));
		return (result);
	}
	return (0);
}
