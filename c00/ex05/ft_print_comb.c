/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrahari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:00:27 by anrahari          #+#    #+#             */
/*   Updated: 2024/01/26 15:47:30 by anrahari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char i);

void	print_k(char i, char j, char k);

void	print_k(char i, char j, char k)
{
	while (k <= '9')
	{
		write(1, &i, 1);
		write(1, &j, 1);
		write(1, &k, 1);
		put_char(i);
		k++;
	}
}

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	j = '1';
	k = '2';
	while (i <= '7')
	{
		while (j <= '8')
		{
			print_k(i, j, k);
			j++;
			k = j + 1;
		}
		i++;
		j = i + 1;
		k = j + 1;
	}
}

void	put_char(char i)
{
	if (i != '7')
	{
		write(1, ", ", 2);
	}
}

int main()
{
	ft_print_comb();
}
