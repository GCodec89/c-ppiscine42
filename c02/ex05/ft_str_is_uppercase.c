/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:46:23 by gonolive          #+#    #+#             */
/*   Updated: 2024/01/09 12:49:42 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str > 90 || *str < 65)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char	*str1;

	str1 = "ok";
	printf("%d\n", ft_str_is_uppercase(str1));
}*/
