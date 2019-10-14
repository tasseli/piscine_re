/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 20:56:12 by mnenonen          #+#    #+#             */
/*   Updated: 2019/10/14 21:01:48 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
	char current;

	current = 'a';
	while (current != 'z' + 1)
	{
		write(1, &current, 1);
		++current;
	}
}
