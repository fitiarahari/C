/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrahari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:14:56 by anrahari          #+#    #+#             */
/*   Updated: 2024/01/29 11:56:31 by anrahari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/*unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int	size)
{
	
}*/

int main()
{
	char	dest[] = "Hello ";
	char	src[] = "machin";
	unsigned int i = 3;

	printf("%d", strlcpy(dest, src, i));
}
