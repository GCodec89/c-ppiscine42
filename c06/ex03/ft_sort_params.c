/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 23:24:37 by gonolive          #+#    #+#             */
/*   Updated: 2024/01/14 10:22:23 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' || s2[j] != '\0')
	{
		if (s1[i] != s2[j])
		{
			return (s1[i] - s2[j]);
		}
		i++;
		j++;
	}
	return (0);
}

char	ft_sort_arrays(int argc, char *argv[])
{
	char	*garage;
	int		i;

	i = 1;
	while (i < argc)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				garage = argv[i + 1];
				argv[i + 1] = argv[i];
				argv[i] = garage;
			}
			i++;
		}
		i = 1;
		argc--;
	}
	return (*argv[i]);
}

int	main(int argc, char *argv[])
{
	int		i;

	ft_sort_arrays(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		if (i < argc - 1)
		{
			ft_putchar('\n');
		}
		i++;
	}
	ft_putchar('\n');
}
