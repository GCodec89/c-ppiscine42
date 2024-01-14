/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:23:59 by gonolive          #+#    #+#             */
/*   Updated: 2024/01/11 14:38:33 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb >= 2)
	{
		while (i >= 1)
		{
			nb = nb * i;
			i--;
		}
	}
	return (nb);
}

/*int	main(void)
{
	int	n;

	n = 5;
	printf("%d\n", ft_iterative_factorial(n));
}*/
