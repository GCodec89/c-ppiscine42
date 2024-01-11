/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:08:27 by gonolive          #+#    #+#             */
/*   Updated: 2024/01/10 19:04:29 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res_dest;
	unsigned int	res_src;

	i = ft_strlen(dest);
	j = 0;
	res_dest = ft_strlen(dest);
	res_src = ft_strlen(src);
	if (size < 1)
		return (res_src + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < res_dest)
		return (res_src + size);
	else
		return (res_dest + res_src);
}

/*int	main(void)
{
	unsigned int	size;
	char			str1[1];
	char			str2[] = "Yolanda";

	size = sizeof(str1);
	printf("%d\n", ft_strlcat(str1, str2, size));
	printf("%lu\n", strlcat(str1, str2, size));
}*/
