/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 21:02:26 by mnenonen          #+#    #+#             */
/*   Updated: 2019/10/21 21:07:19 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(1, str, 1);
		++str;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n");
	if (argc >= 3)
		ft_putstr("Too many arguments.\n");
	return (0);
}
