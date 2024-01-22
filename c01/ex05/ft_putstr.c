/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satay <satay@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:26:19 by satay             #+#    #+#             */
/*   Updated: 2023/11/01 18:03:37 by satay            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	While (str[n] != '\0')
	{
		write(1, &str[n], 1);
		n++;
	}
}

/*int main()
{
	char *str = "STDOUT";
	ft_putstr(str);
}*/
