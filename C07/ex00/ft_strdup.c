/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 17:31:51 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/06/08 20:39:35 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*strp;
	int		len;
	int		i;

	len = ft_strlen(str);
	i = 0;
	strp = (char *)malloc(sizeof(*strp) * (len + 1));
	if (sizeof(strp) < sizeof(str))
		return (NULL);
	while (str[i] != '\0')
	{
		strp[i] = str[i];
		i++;
	}
	strp[i] = '\0';
	return (strp);
}
