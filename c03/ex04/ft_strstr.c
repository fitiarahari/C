/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrahari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:19:06 by anrahari          #+#    #+#             */
/*   Updated: 2024/01/29 16:57:02 by anrahari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	test;
	int	i;

	test = 1;
	i = 0;
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			test = 1;
			return (str);
		}
		while (to_find[i])
		{
			if (to_find[i] != str[i])
				test = 0;
			i++;
		}
		if (test)
			return (str);
		str++;
	}
	return (str);
}

/*
int main()
{
	char	str[]="How's your day?";
	char to_find[]="yo";

	printf("%s", ft_strstr(str, to_find));
}*/
