/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 23:42:00 by mmassaak          #+#    #+#             */
/*   Updated: 2021/03/26 00:59:02 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "example_header.h"

/*
** BUILDANDO E COMPILANDO
** Nesse caso, temos sample_funciton.c que eh onde estao as funcoes
** Um arquivo example_header.h que eh onde estao as declaracoes das funcoes
** Para isso, precisamos compilar o example_function.c
** e unir o main.c ao build final
** gcc -c example_function.c -o example_function.o
** gcc main.c example_function.o -o build && ./build
*/

int	main(void)
{
	sum_values(10, 12);
	return (0);
}
