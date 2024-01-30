/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrahari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:50:01 by anrahari          #+#    #+#             */
/*   Updated: 2024/01/25 12:14:27 by anrahari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' || s2[i] != '\0')
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

/*int main()
{
	char	s1[]="abc";
	char	s2[]="";
	unsigned int i;

	i = 1;
	printf("%d", ft_strncmp(s1, s2, i));
}*/
