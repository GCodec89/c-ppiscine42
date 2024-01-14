/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:24:02 by gonolive          #+#    #+#             */
/*   Updated: 2024/01/11 14:56:35 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_recursive_factorial(int nb)
{
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
		nb = nb * ft_recursive_factorial(nb -1);
	}
	return (nb);
}

/*int	main(void)
{
	int	n;

	n = 10;
	printf("%d\n", ft_recursive_factorial(n));
}*/
