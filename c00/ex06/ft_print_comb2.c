/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 08:20:11 by gonolive          #+#    #+#             */
/*   Updated: 2024/01/16 08:41:25 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		ft_putchar(n + 48);
	}
}

void	ft_compile(int n1, int n2)
{
	if (n1 < 10)
	{
		ft_putchar('0');
	}
	ft_putnbr(n1);
	ft_putchar(' ');
	if (n2 < 10)
	{
		ft_putchar('0');
	}
	ft_putnbr(n2);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 1;
	while (n1 != 99)
	{
		while (n2 != 100)
		{
			ft_compile(n1, n2);
			n2++;
		}
		n1++;
		n2 = n1 + 1;
	}
}

int	main(void)
{
	ft_print_comb2();
}
