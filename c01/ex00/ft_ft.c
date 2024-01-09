/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 06:36:39 by gonolive          #+#    #+#             */
/*   Updated: 2024/01/09 07:19:27 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	n;
	int	*ptr;

	n = 21;
	ptr = &n;

	printf("%d\n", n);
	ft_ft(ptr);
	printf("%d\n", n);
}
