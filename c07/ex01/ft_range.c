/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:28:41 by gonolive          #+#    #+#             */
/*   Updated: 2024/01/16 13:38:11 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*dest;

	len = max - min;
	if (len <= 0)
	{
		dest = NULL;
		return (dest);
	}
	dest = (int *)malloc(sizeof(int) * len);
	i = 0;
	while (i < len)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	int	peq;
	int	gra;
	int	*str;
	int	i;
	int	tam;

	peq = 2;
	gra = 11;
	i = 0;
	tam = gra - peq;
	str = ft_range(peq, gra);
	while (i < tam)
	{
		printf("%d\n", str[i]);
		i++;
	}
}*/
