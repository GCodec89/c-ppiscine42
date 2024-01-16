/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:38:23 by gonolive          #+#    #+#             */
/*   Updated: 2024/01/16 19:38:35 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;
	int	*dest;

	len = max - min;
	if (len <= 0)
	{
		*range = NULL;
		return (0);
	}
	dest = (int *)malloc(sizeof(int) * len);
	*range = dest;
	if (*range == NULL)
	{
		return (-1);
	}
	i = 0;
	while (max > min)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (i);
}

/*int	main(void)
{
	int	peq;
	int	gra;
	int	tam;
	int	i;
	int	*str;

	peq = 2;
	gra = 11;
	i = 0;
	tam = ft_ultimate_range(&str, peq, gra);
	while (i < tam)
	{
		printf("%d\n", str[i]);
		i++;
	}
}*/
