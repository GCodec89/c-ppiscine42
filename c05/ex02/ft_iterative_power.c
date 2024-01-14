/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:24:05 by gonolive          #+#    #+#             */
/*   Updated: 2024/01/11 15:09:25 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power == 1)
	{
		return (nb);
	}
	if (power >= 2)
	{
		while (power >= 1)
		{
			res = res * nb;
			power--;
		}
	}
	return (res);
}

/*int	main(void)
{
	int	base;
	int	exp;

	base = 3;
	exp = 4;
	printf("%d\n", ft_iterative_power(base, exp));
}*/
