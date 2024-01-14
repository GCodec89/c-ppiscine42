/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:24:09 by gonolive          #+#    #+#             */
/*   Updated: 2024/01/11 17:03:05 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_fibonacci(int index)
{
	int	res;

	res = 0;
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	if (index >= 2)
	{
		res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (res);
}

/*int	main(void)
{
	int	i;

	i = 10;
	printf("%d\n", ft_fibonacci(i));
}*/
