/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:24:07 by gonolive          #+#    #+#             */
/*   Updated: 2024/01/11 15:18:18 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_recursive_power(int nb, int power)
{
	int	res;
	int	i;

	res = nb;
	i = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (i < power)
	{
		res = res * ft_recursive_power(nb, (power - 1));
	}
	return (res);
}

/*int	main(void)
{
	int	base;
	int	exp;

	base = 3;
	exp = 4;
	printf("%d\n", ft_recursive_power(base, exp));
}*/
