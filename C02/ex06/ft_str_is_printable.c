/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llondres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:56:55 by llondres          #+#    #+#             */
/*   Updated: 2022/01/27 00:17:16 by llondres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	int	n;

	n = 0;
	if (*str == '\0')
		return (1);
	while (str[n] >= 32 && str[n] <= 126)
		n++;
	if (str[n] == '\0')
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	str[] = "";

	if (ft_str_is_printable(str))
		printf("c'est affichable");
	else
		printf("zut");
	return (0);
}
