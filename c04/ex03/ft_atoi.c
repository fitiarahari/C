/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrahari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:21:55 by anrahari          #+#    #+#             */
/*   Updated: 2024/01/28 16:29:42 by anrahari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int		number;
	int		counter;

	number = 0;
	counter = 0;
	while (*str && number != -1 && counter < 10)
	{
		if (*str < 48 || *str > 57)
			number = -1;
		else
		{
			number *= 10;
			number += *str - '0';
			counter ++;
			str ++;
		}	
	}
	if (number == -1 || *str != '\0')
	{
		number = -1;
		write(1, "Error\n", 6);
	}
	return (number);
}

/*int	ft_atoi(char *str)
{
	int res = 0;
	int i = 0;
	int sign = 1;

	i = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
	 res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign*res);
}*/

int main()
{
	char	l[]= "--+123";

	printf("%d", ft_atoi(l));
}
