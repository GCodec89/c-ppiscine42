/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 20:52:45 by gonolive          #+#    #+#             */
/*   Updated: 2024/01/08 23:11:53 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_mult_char(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, ",", 1);
	write(1, " ", 1);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					ft_put_mult_char(a, b, c, d);
					d++;
				}
				d = '0';
				c++;
			}
			d = '0';
			c = '0';
			b++;
		}
		d = '0';
		c = '0';
		b = '0';
		a++;
	}
	write(1, "\n", 1);
}

/*int	main(void)
{
	ft_print_comb2();
}*/
