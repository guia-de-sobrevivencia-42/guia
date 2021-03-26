/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example_function.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 23:42:00 by mmassaak          #+#    #+#             */
/*   Updated: 2021/03/26 00:52:47 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "example_header.h"

void	sum_values(int number1, int number2)
{
	int result;

	result = number1 + number2;
	printf("result: %d\n", result);
}
