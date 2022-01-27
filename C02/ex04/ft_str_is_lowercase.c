/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llondres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:30:10 by llondres          #+#    #+#             */
/*   Updated: 2022/01/26 23:38:49 by llondres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	n;

	n = 0;
	if (*str == '\0')
		return (1);
	while (str[n] >= 'a' && str[n] <= 'z')
		n++;
	if (str[n] == '\0')
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	str[] = "a2cdef";

	if (ft_str_is_lowercase(str))
		printf("desminuscules");
	else
		printf("zut");
	return (0);
}
