/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llondres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 02:01:26 by llondres          #+#    #+#             */
/*   Updated: 2022/01/26 23:13:09 by llondres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	n;

	n = 0;
	if (*str == '\0')
		return (1);
	while ((str[n] >= 'a' && str[n] <= 'z') || (str[n] >= 'A' && str[n] <= 'Z'))
		n++;
	if (str[n] == '\0')
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	str[] = "bo5jour";

	if (ft_str_is_alpha (str))
		printf("une phrase!");
	else
		printf("zut");
	return (0);
}
