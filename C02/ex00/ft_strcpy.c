/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llondres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:40:55 by llondres          #+#    #+#             */
/*   Updated: 2022/01/26 23:29:05 by llondres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *scr)
{	
	int	c;

	c = 0;
	while (scr[c] != 0)
	{
		dest[c] = scr[c];
		c++;
	}
	return (dest);
}

int	main(void)
{	
	char	scr[] = "Aller";
	char	dest[] = "Bonjour";

	ft_strcpy(dest, scr);
	printf("%s\n", strcpy(dest, scr));
	printf("%s\n", ft_strcpy(dest, scr));
	return (0);
}
