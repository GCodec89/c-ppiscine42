/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 06:38:29 by gonolive          #+#    #+#             */
/*   Updated: 2024/01/09 07:32:57 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 2;
	b = 10;
	printf("%d\n", a);
	printf("%d\n", b);
	ft_swap(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
}*/
