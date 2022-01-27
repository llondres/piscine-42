/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llondres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:40:02 by llondres          #+#    #+#             */
/*   Updated: 2022/01/26 23:50:01 by llondres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	int	n;

	n = 0;
	if (*str == '\0')
		return (1);
	while (str[n] >= 'A' && str[n] <= 'Z')
		n++;
	if (str[n] == '\0')
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	str[] = "A5CDEF";

	if (ft_str_is_uppercase(str))
		printf("desmajuscules");
	else
		printf("zut");
	return (0);
}
