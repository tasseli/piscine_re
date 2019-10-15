/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:04:11 by mnenonen          #+#    #+#             */
/*   Updated: 2019/10/15 19:09:03 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	current;

	current = '0';
	while(current != '9' + 1)
	{
		ft_putchar(current);
		++current;
	}
}
