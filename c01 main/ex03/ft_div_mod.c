/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 11:53:28 by jlaurent          #+#    #+#             */
/*   Updated: 2021/07/12 20:15:20 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int        main(void)
{
    int a;
    int b;
    int div;
    int mod;

    a = 5;
    b = 2;
    ft_div_mod(a, b, &div, &mod);
    printf("%d / %d = %d, left %d\n", a, b, div, mod);
}
