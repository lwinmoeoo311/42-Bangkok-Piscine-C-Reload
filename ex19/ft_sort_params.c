/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwoo <lwoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 18:51:03 by lwoo              #+#    #+#             */
/*   Updated: 2025/10/16 12:37:16 by lwoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void	ft_putchar(char c);

// void	ft_print(char *str)
// {
// 	while (*str)
// 	{
// 		ft_putchar(*str);
// 		str++;
// 	}
// }

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	i = s1[i] - s2[i];
	return (i);
}

int	main(int argc, char *argv[])
{
	int		i;
	char	*temp;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp (argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 1;
		}
		else
			i++;
	}
	i = 1;
	// while (argv[i])
	// {
	// 	ft_print(argv[i]);
	// 	ft_putchar('\n');
		
	// 	i++;
	// }
}
