/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llondres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 04:37:45 by llondres          #+#    #+#             */
/*   Updated: 2022/01/22 23:16:51 by llondres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	char	count;

	count = 0;
	while (*str++)
	{
		count++;
	}
	return (count);
}

int	main(void)
{	
	printf("len = %d\n", ft_strlen("abcdef"));
	return (0);
}
