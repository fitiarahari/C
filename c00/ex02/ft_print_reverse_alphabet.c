/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrahari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 08:42:23 by anrahari          #+#    #+#             */
/*   Updated: 2024/01/12 09:47:17 by anrahari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char	alphabet;
	int		i;

	alphabet = 'z';
	i = 0;
	while (i < 26)
	{
		write(1, &alphabet, 1);
		i++;
		alphabet--;
	}
}
