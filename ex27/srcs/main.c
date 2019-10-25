/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 21:02:26 by mnenonen          #+#    #+#             */
/*   Updated: 2019/10/25 22:23:53 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 4

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
	int		chars;
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
	while ((chars = read(fd, buf, BUF_SIZE)))
	{
		i = 0;
		while (i < chars)
			ft_putchar(buf[i++]);
	}
	close(fd);
	return (0);
}
