/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 09:57:22 by gonolive          #+#    #+#             */
/*   Updated: 2024/04/16 16:14:14 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && (j < (size - 1)))
	{
		dest[j] = src[j];
		j++;
	}
	if (size != '\0')
	{
		dest[j] = '\0';
	}
	return (i);
}

/*int	main(void)
{
	char			dest[1];
	char			src[] = "Carolina Michaelis";
	unsigned int	s;

	s = sizeof(dest);
	printf("%d\n", ft_strlcpy(dest, src, s));
	printf("%lu\n", strlcpy(dest, src, s));
}*/
