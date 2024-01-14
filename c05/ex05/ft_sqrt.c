/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:24:12 by gonolive          #+#    #+#             */
/*   Updated: 2024/01/11 17:09:56 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_sqrt(int nb)
{
	long	i;

	i = 1;
	if (nb <= 0)
	{
		return (0);
	}
	if (nb >= 1)
	{
		while (i < nb)
		{
			if ((i * i) == nb)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}

/*int	main(void)
{
	int	n;

	n = 2500;
	printf("%d\n", ft_sqrt(n));
}*/
