/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeen-wy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:46:34 by ekeen-wy          #+#    #+#             */
/*   Updated: 2021/06/10 15:50:32 by ekeen-wy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	char	*s;
	int		i;

	i = 0;
	s = ft_strlowcase(str);
	while (s[i] != '\0')
	{
		if (s[i] == s[0] && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;
		else if (s[i] >= 'a' && s[i] <= 'z' && s[i - 1] == 32)
			s[i] -= 32;
		else if ((s[i] >= 'a' && s[i] <= 'z') && ((s[i - 1] > 32 && s[i - 1]
					<= 47) || (s[i - 1] > 57 && s[i - 1]
					<= 64) || (s[i - 1] > 122 && s[i - 1] < 127) || (s[i - 1]
					>= 91 && s[i - 1] <= 96)))
		{
			s[i] -= 32;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

#include<stdio.h>
int	main()
{
	char	a[] = "#9)Gcye;AAA@@@@11123       o$Lorv(K/#8?";
	printf("%s", ft_strcapitalize(a));
}
