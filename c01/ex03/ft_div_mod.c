/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satay <satay@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:38:48 by satay             #+#    #+#             */
/*   Updated: 2023/11/01 15:48:36 by satay            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a,	int b,	int *div,	int *mod)

{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	div;
 	int	mod;

	a = 15;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf	("girilen degerler\n");
	printf("a:%d\nb:%d\nbölüm:%d\nmod:%d",a,b,div,mod);
}*/
