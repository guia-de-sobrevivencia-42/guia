/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 23:42:00 by mmassaak          #+#    #+#             */
/*   Updated: 2021/03/24 02:31:35 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "some_structure.h"

int
	main(void)
{
	student *some_student;

	some_student = (student *)malloc(sizeof(student));
	printf("Hello 42Sp!\n");
	printf("Write some name: \n");
	scanf("%s", some_student->name);
	printf("student name: %s\n", some_student->name);
	return (0);
}
