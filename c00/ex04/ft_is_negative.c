/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:48:10 by gonolive          #+#    #+#             */
/*   Updated: 2024/01/08 16:02:02 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	neg;
	char	p;

	neg = 'N';
	p = 'P';
	if (n < 0)
	{
		write(1, &neg, 1);
	}
	else
	{
		write(1, &p, 1);
	}
}

/*int	main(void)
{
	int	n;

	n = -100;
	ft_is_negative(n);
}*/
