/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 18:48:25 by mnenonen          #+#    #+#             */
/*   Updated: 2019/10/18 19:44:57 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (*str != 0)
	{
		++count;
		++str;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*newptr;

	len = ft_strlen(src);
	newptr = malloc((len + 1) * sizeof(char));
	if (!newptr)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		newptr[i] = src[i];
		++i;
	}
	return (newptr);
}
