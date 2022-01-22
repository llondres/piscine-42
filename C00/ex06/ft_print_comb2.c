/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llondres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 05:30:46 by llondres          #+#    #+#             */
/*   Updated: 2022/01/19 04:09:34 by llondres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a != '9' || b != '8')
		write (1, "," " ", 2);
}

void	ft_display(char a, char b, char c, char d)
{
	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{	
			c = '0';
			while (c <= '9')
			{
				d = '0';
				while (d <= '9')
				{
					if ((a * 10 ) + b < (c * 10 ) + d)
						ft_putchar(a, b, c, d);
					++d;
				}
				++c;
			}
			++b;
		}
		++a;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	ft_display(a, b, c, d);
}
