/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 21:50:58 by mnenonen          #+#    #+#             */
/*   Updated: 2019/10/23 22:34:19 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int ans;

	if (nb > 1)
	{
		ans = ft_recursive_factorial(nb - 1) * nb;
		if (ans < 0)
			return 0;
		return (ans);
	}
	else if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	return (nb);
}
