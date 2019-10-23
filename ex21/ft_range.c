/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 19:46:17 by mnenonen          #+#    #+#             */
/*   Updated: 2019/10/23 23:57:51 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (!ptr)
		return (NULL);
	while (i < max - min + 1)
	{
		ptr[i] = min + i;
		++i;
	}
	return (ptr);
}
