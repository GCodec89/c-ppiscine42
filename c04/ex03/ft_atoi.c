/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:33:29 by gonolive          #+#    #+#             */
/*   Updated: 2024/01/15 09:22:35 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_atoi(char *str)
{
	int	i;
	int	sinal;
	int	result;

	i = 0;
	while (str[i] <= 32)
	{
		i++;
	}
	sinal = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sinal = sinal * -1;
		}
		i++;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sinal);
}

/*int	main(void)
{
	char	str1[] = "    ---+-+-178tuh189";

	printf("%d\n", ft_atoi(str1));
}*/
