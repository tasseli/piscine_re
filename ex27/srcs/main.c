/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 21:02:26 by mnenonen          #+#    #+#             */
/*   Updated: 2019/10/21 23:42:20 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 2

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

int		check_argc(int count)
{
	if (count == 1)
	{
		ft_puterror("File name missing.\n");
		return (1);
	}
	if (count >= 3)
	{
		ft_puterror("Too many arguments.\n");
		return (3);
	}
	return (2);
}

int		main(int argc, char **argv)
{
	int		fd;
	char	buf[BUF_SIZE];
	int		i;

	i = 0;
	while (i++ < BUF_SIZE)
		buf[i] = 0;
	if (check_argc(argc) != 2)
		return (-1);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_puterror("Error opening the file for reading.\n");
		return (-3);
	}
	i = 0;
	while (read(fd, buf, BUF_SIZE) == BUF_SIZE)
		if (buf[i] != 0)
			ft_putstr(&buf[i]);
		else
			break;
	close(fd);
	return (0);
}