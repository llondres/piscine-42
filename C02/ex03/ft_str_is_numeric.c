/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llondres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 22:42:45 by llondres          #+#    #+#             */
/*   Updated: 2022/01/27 01:28:12 by llondres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str)
{
	int	n;

	n = 0;
	if (*str == '\0')
		return (1);
	while (str[n] >= '0' && str[n] <= '9')
		n++;
	if (str[n] == '\0')
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	str[] = "15584";

	if (ft_str_is_numeric(str))
		printf("des chiffres!");
	else
		printf("zut");
	return (0);
}
