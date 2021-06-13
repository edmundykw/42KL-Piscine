/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 11:37:20 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/06/09 12:32:39 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc(sizeof(int) * (max - min));
	if (!(*range))
		return (-1);
	i = 0;
	while (min < max)
	{
		*(*range + i) = min;
		i++;
		min++;
	}
	return (i);
}
