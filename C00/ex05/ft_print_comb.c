/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 17:15:14 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/05/25 15:28:13 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a, char b, char c);
void	ft_print_comb(void);

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;
	int	i;

	a = 0;
	i = 1;
	while (a < 8)
	{
		b = a + 1;
		while (b < 9)
		{
			c = a + b + i;
			while (c < 10)
			{
				ft_putchar(a + 48, b + 48, c + 48);
				c++;
			}
			b++;
		}
		a++;
		i -= 1;
	}
}

void	ft_putchar(char a, char b, char c)
{
	if (a < 55)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		write(1, ",", 1);
		write(1, " ", 1);
	}
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
	}
}
