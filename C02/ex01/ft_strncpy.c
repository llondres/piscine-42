/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llondres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:53:51 by llondres          #+#    #+#             */
/*   Updated: 2022/01/26 23:16:03 by llondres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *scr, unsigned int n)
{
	int	c;

	c = 0;
	while (scr[c] != 0 && n != 0)
	{
		dest[c] = scr[c];
		c++;
		n--;
	}
	dest[c] = '\0';
	return (dest);
}

int	main(void)
{
	char			scr[] = "hello";
	char			dest[] = "bonjour";
	unsigned int	n = 5;

	ft_strncpy(dest, scr, n);
	printf("%s\n", strncpy(dest, scr, n));
	printf("%s\n", ft_strncpy(dest, scr, n));
	return (0);
}
