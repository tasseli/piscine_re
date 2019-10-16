/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 21:42:37 by mnenonen          #+#    #+#             */
/*   Updated: 2019/10/16 22:09:14 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		ft_putchar(*str);
		++str;
	}
}

int		main(int argc, char **argv)
{
	int	i;

	i = 2;
	while (i <= argc)
	{
		ft_putstr(argv[i - 1]);
		++i;
		ft_putchar('\n');
	}
	return (0);
}
