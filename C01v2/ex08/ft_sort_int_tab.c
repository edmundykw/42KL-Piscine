/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 23:50:42 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/05/26 23:57:15 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 1;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[n] < tab[n - 1])
			{
				temp = tab[n];
				tab[n] = tab[n - 1];
				tab[n - 1] = temp;
				if (i != -1)
				{
					f--;
				}
			}
			n++;
		}
		f++;
		n = f + 1;
	}
}
