/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 21:58:52 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/05/26 23:59:57 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *tab, int i, int max)
{
	int	temp;

	temp = tab[i];
	tab[i] = tab[max];
	tab[max] = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	max;

	i = 0;
	max = size - 1;
	while (i < size / 2)
	{
		ft_swap(tab, i, max);
		max--;
		i++;
	}
}
