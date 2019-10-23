/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 21:29:40 by mnenonen          #+#    #+#             */
/*   Updated: 2019/10/23 22:27:09 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	long long ans;

	ans = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		ans = ans * nb;
		if (ans < 0)
			return (0);
		--nb;
	}
	nb = (int) ans;
	if (nb < 0)
		return (0);
	return (nb);
}
