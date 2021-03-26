/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 23:42:00 by mmassaak          #+#    #+#             */
/*   Updated: 2021/03/26 00:36:14 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/*
** DECLARACAO E ATRIBUICAO DE VARIAVEIS
** Lembre-se de manter as variaveis alinhadas
** %d: Inteiro
** %c: Caractere
** %s: String
** %f: Float
** A funcao strcpy para copiar char a char
** Variaveis do tipo float, insira um '.2' para definir 2 casas decimais
*/

int	main(void)
{
	int		some_number;
	char	some_char;
	char	some_string[30];
	float	some_float;

	some_number = 10;
	some_char = 'a';
	strcpy(some_string, "asd");
	some_float = 123.32;
	printf("some_number: %d\n", some_number);
	printf("some_char: %c\n", some_char);
	printf("some_string: %s\n", some_string);
	printf("some_float: %.2f\n", some_float);
	return (0);
}
