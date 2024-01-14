/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:24:14 by gonolive          #+#    #+#             */
/*   Updated: 2024/01/11 17:19:58 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	if (nb >= 2)
	{
		while (i < nb)
		{
			if ((nb % i) == 0)
			{
				return (0);
			}
			i++;
		}
	}
	return (1);
}

/*int	main(void)
{
	int	n;

	n = 97;
	printf("%d\n", ft_is_prime(n));
}*/
