/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satay <satay@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:30:44 by satay             #+#    #+#             */
/*   Updated: 2023/11/01 14:09:52 by satay            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	n;
	int	*nbr8;
	int	**nbr7;
	int	***nbr6;
	int	****nbr5;
	int	*****nbr4;
	int	******nbr3;
	int	*******nbr2;
	int	********nbr1;
	int	*********nbr;

	n = 0;
	nbr8 = &n;
	nbr7 = &nbr8;
	nbr6 = &nbr7;
	nbr5 = &nbr6;
	nbr4 = &nbr5;
	nbr3 = &nbr4;
	nbr2 = &nbr3;
	nbr1 = &nbr2;
	nbr = &nbr1;
	ft_ultimate_ft(nbr);
	printf("%d", n);
	return (0);
}
