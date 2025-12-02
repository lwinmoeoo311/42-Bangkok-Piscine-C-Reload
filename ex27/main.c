/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 00:12:42 by lwoo              #+#    #+#             */
/*   Updated: 2025/08/27 09:18:48 by lwoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (2, str, 1);
		str++;
	}
	write (1, "\n", 1);
}

void	read_file(char *str)
{
	int		fd;
	int		ret;
	char	content[1];

	ret = 1;
	fd = open(str, O_RDONLY);
	if (fd == -1)
		ft_putstr("Cannot read file.");
	while (ret > 0)
	{
		ret = read (fd, content, 1);
		if (ret > 0)
			ft_putchar(content[0]);
	}
	close(fd);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		ft_putstr("File name missing.");
	else if (argc > 2)
		ft_putstr("Too many arguments.");
	else
		read_file(argv[1]);
}
