/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llondres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:52:57 by llondres          #+#    #+#             */
/*   Updated: 2022/01/20 17:22:20 by llondres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a,	int *b)
{
	int	box;
	box = *a;

	*a = *b;
	*b = box;
}

int	main(void)
{
	int	c;
	int	d;

	c = 5;
	d = 27;
	ft_swap(&c, &d);
	printf("%d\n%d", c, d);
	return (0);
}
