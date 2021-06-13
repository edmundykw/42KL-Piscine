/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 19:11:15 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/06/02 21:04:26 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	c;

	i = 0;
	j = 0;
	c = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && c < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}
