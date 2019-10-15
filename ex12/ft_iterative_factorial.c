/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 21:29:40 by mnenonen          #+#    #+#             */
/*   Updated: 2019/10/15 21:41:42 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	ans;

	ans = 1;
	while (nb > 1)
	{
		ans = ans * nb;
		--nb;
	}
	nb = ans;
	return (nb);
}
