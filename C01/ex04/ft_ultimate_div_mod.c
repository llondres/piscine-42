/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llondres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 00:20:34 by llondres          #+#    #+#             */
/*   Updated: 2022/01/21 01:45:07 by llondres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{	
	int	swap;

	swap = *a;
	*a = *a / *b;
	*b = swap % *b;
}

int	main(void)
{
	int	a;
	int	b;
	a = 20;
	b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d", a, b);
	return (0);
}
