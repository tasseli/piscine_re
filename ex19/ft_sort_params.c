/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 22:38:33 by mnenonen          #+#    #+#             */
/*   Updated: 2019/10/16 23:22:54 by mnenonen         ###   ########.fr       */
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
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != 0 && *s2 != 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*tmp;
	char	tmpc;

	tmp = &tmpc;
	i = 1;
	while (i < argc)
	{
		if (i >= 2)
		{
			if (ft_strcmp(argv[i - 1], argv[i]) > 0)
			{
				tmp = argv[i - 1];
				argv[i - 1] = argv[i];
				argv[i] = tmp;
				i = 1;
			}
		}
		++i;
	}
	i = 1;
	while (i++ < argc)
		ft_putstr(argv[i - 1]);
	return (0);
}
