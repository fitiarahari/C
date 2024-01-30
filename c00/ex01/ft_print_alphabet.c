/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrahari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 21:32:04 by anrahari          #+#    #+#             */
/*   Updated: 2024/01/12 09:31:45 by anrahari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	alphabet;
	int		i;

	alphabet = 'a';
	i = 0;
	while (i < 26)
	{
		write(1, &alphabet, 1);
		i++;
		alphabet++;
	}
}
