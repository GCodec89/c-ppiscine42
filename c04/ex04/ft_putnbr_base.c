/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:49:04 by gonolive          #+#    #+#             */
/*   Updated: 2024/01/11 13:30:25 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
		{
			return (0);
		}
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base_recursive(int nbr, char *base, int size)
{
	char	digit;

	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= size)
	{
		ft_putnbr_base_recursive((nbr / size), base, size);
	}
	digit = base[nbr % size];
	ft_putchar(digit);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	if (ft_check_base(base) == 0)
	{
		return ;
	}
	size = 0;
	while (base[size] != '\0')
	{
		size++;
	}
	ft_putnbr_base_recursive(nbr, base, size);
}

/*int	main(void)
{
	ft_putnbr_base(420, "01");
	ft_putchar('\n');
	ft_putnbr_base(-123, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(255, "0123456789ABCDEF");
	ft_putchar('\n');
	ft_putnbr_base(75, "poneyvif");
	ft_putchar('\n');
	ft_putnbr_base(42, "");
	ft_putchar('\n');
	ft_putnbr_base(42, "0123456789+");
	ft_putchar('\n');
}*/
