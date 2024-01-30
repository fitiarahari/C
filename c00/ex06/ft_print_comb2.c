/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrahari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:53:58 by anrahari          #+#    #+#             */
/*   Updated: 2024/01/16 11:59:04 by anrahari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	f_num(void);

void	s_num(void);

void	ft_putchar(char c);

void    ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	f_num(void)
{
	int	dc;
	int	unit;
	int i;

	i = 0;
	while (i < 98)
	{
		if (i >= 10)
		{
			dc = (i / 10) + '0';
			unit = (i % 10) + '0';
		}
		else
		{
			dc = '0';
			unit = i + '0';
		}
		i++;
		ft_putchar(dc);
		ft_putchar(unit);
	}
}

void	s_num(void)
{
	int	d;
	int	u;
	int j;

	j = 1;
	while (j < 99)
	{
		if (j >= 10)
		{
			d = (j / 10) + '0';
			u = (j % 10) + '0';
		}
		else
		{
			d = '0';
			u = j + '0';
		}
		j++;
		write(1, " ", 1);
		ft_putchar(d);
		ft_putchar(u);
	}
}

void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	f_num();
	s_num();
}

int	main(void)
{
	ft_print_comb2();
	return(0);
}
