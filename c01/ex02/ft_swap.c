/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satay <satay@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:22:17 by satay             #+#    #+#             */
/*   Updated: 2023/11/01 14:36:06 by satay            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swp;

	swp = *a;
	*a = *b;
	*b = swp;
}

/*int	main(void)
{
	int	j;
	int	k;

	j = 7;
	k = 9;
	ft_swap(&j, &k);
	printf("%d \n", j);
	printf("%d", k);
}*/
