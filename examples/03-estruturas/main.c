/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 23:42:00 by mmassaak          #+#    #+#             */
/*   Updated: 2021/03/26 00:12:19 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "example_header.h"

/*
** CRIANDO ESTRUTURAS
** Estruturas nao podem estar em arquivos '.c'
** Estruturas devem comecar com 's_' (p.e s_user)
** Typedef devem comecar com 't_' (p.e t_student)
** Todos os identificadores devem estar em ingles
** Devem estar escritos em UNIX Case (um_exemplo_seria_escrever_assim)
** RODANDO O NORMINETE
** 1. Va para o diretorio do projeto
** 2. execute 'norminete <nome_do_projeto>.c'
** COMPILANDO E EXECUTANDO
** 1. Va para o diretorio do projeto
** 2. Execute 'gcc <nome_do_projeto>.c -o build
** 3. Execute './build'
*/

int	main(void)
{
	t_user *user;

	user = (t_user *)malloc(sizeof(t_user));
	printf("Write your first name: \n");
	scanf("%s", user->name);
	printf("How old are you? \n");
	scanf("%d", &user->age);
	printf("Your name is: %s, you are %d years old.\n", user->name, user->age);
	return (0);
}
