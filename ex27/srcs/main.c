/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 21:02:26 by mnenonen          #+#    #+#             */
/*   Updated: 2019/10/21 23:13:37 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(1, str, 1);
		++str;
	}
}

void	ft_puterror(char *str)
{
	while (*str != 0)
	{
		write(2, str, 1);
		++str;
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	char	buf[BUF_SIZE];

	if (argc == 1)
	{
		ft_puterror("File name missing.\n");
		return (-1);
	}
	if (argc >= 3)
	{
		ft_puterror("Too many arguments.\n");
		return (-2);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_puterror("Error opening the file for reading.\n");
		return (-3);
	}
	read(fd, buf, BUF_SIZE);
	ft_putstr(buf);
	close(fd);
	return (0);
}
