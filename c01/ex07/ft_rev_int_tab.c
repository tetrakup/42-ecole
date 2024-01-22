/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satay <satay@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:45:28 by satay             #+#    #+#             */
/*   Updated: 2023/11/01 18:59:30 by satay            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
        int a;
        int b;
        int rev;

        a = 0;
        b = size - 1;
        while (a < (size / 2))
        {
                rev = tab[a];
                tab[a] = tab[b];
                tab[b] = rev;
                a++;
                b--;
        }
}

#include <stdio.h>

int main(void)
{
        int tab[] = {1,2,3,4};
        int size;
        size = 4;
        int i;

        ft_rev_int_tab(tab, size);
        i = 0;
        while (i < size)
        {
                printf("%d", tab[i]);
                i++;
        }
}
