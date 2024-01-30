/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrahari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:49:36 by anrahari          #+#    #+#             */
/*   Updated: 2024/01/18 10:05:35 by anrahari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	element;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		element = tab[i];
		tab [i] = tab [j];
		tab [j] = element;
		i++;
		j--;
	}
}
