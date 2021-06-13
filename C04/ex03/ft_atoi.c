/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 12:12:28 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/06/10 14:00:58 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	base_conv;

	i = 0;
	sign = 1;
	base_conv = 0;
	while ((str[i] == '\n' || str[i] == '\t' || str[i] == '\v' ||str[i] == '\r'
			|| str[i] == '\f' || str[i] == ' ') && str[i] != '\0')
		i++;
	while ((str[i] == '-' || str[i] == '+') && str[i] != '\0')
	{
		if (str [i] == '-')
			sign *= -1;
		i++;
	}
	while ((str [i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		base_conv = base_conv * 10 + (str[i] - '0');
		i++;
	}
	return (sign * base_conv);
}
