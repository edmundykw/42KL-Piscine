/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 12:34:31 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/06/09 19:48:28 by ekeen-wy         ###   ########.fr       */
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

char	*ft_allc_size(int size, char **strs, char *sep)
{
	int		i;
	int		length;
	char	*str;

	i = 0;
	length = 0;
	if (size < 1)
	{
		length = 1;
	}	
	else
	{
		while (i < size)
		{
			length += ft_strlen(strs[i]);
			i++;
		}
	}
	length += ft_strlen(sep) * (size - 1);
	str = (char *)malloc(sizeof(char) * length);
	if (!str)
		return (0);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		t;
	int		s;
	char	*strp;

	strp = ft_allc_size(size, strs, sep);
	i = 0;
	t = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			strp[t++] = strs[i][j];
			j++;
		}
		s = 0;
		while (sep[s] != '\0' && i < size - 1)
			strp[t++] = sep[s++];
		i++;
	}
	strp[t] = '\0';
	return (strp);
}
