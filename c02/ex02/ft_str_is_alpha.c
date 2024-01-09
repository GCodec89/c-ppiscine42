/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:04:25 by gonolive          #+#    #+#             */
/*   Updated: 2024/01/09 12:14:46 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (*str < 65 || *str > 122 || (*str > 90 && *str < 97))
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

	str1 = "A0A";
	printf("%d\n", ft_str_is_alpha(str1));
}*/
