/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrahari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:00:01 by anrahari          #+#    #+#             */
/*   Updated: 2024/01/25 12:36:55 by anrahari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
#include <string.h>
//#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dest[j + i] = src [i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}
/*int main()
{
	char	test1[]= "Bonjour ";
	char	test2[]="machin";
	int i;
	i = 0;
	ft_strcat(test1, test2);
	while (test1[i] != '\0')
		write(1, &test1[i++], 1);
//	printf("%s", strcat(test1, test2));
}*/
