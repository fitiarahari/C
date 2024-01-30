/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrahari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:07:52 by anrahari          #+#    #+#             */
/*   Updated: 2024/01/18 10:01:59 by anrahari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 1;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[i] > tab [j])
			{
				tmp = tab[i];
				tab[i] = tab [j];
				tab [j] = tmp;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}
