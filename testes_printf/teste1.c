/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:18:38 by danbarbo          #+#    #+#             */
/*   Updated: 2023/11/12 17:41:28 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	// %c
	puts("%c");
	printf("%c\n", 'a');
	puts("");

	// %s
	puts("%s");
	printf("%s\n", "Batata");
	puts("");

	// %p
	char	*char_a = "Batata";
	int		int_a[] = {1};
	int		*int_b = NULL;
	puts("%p");
	printf("%p\n", char_a);
	printf("%p\n", int_a);
	printf("%p\n", int_b);
	puts("");

	// %d ou %i
	puts("%d ou %i");
	printf("%d\n", 124);
	puts("");

	// %u
	puts("%u");
	printf("%u\n", 124);
	printf("%u\n", -1);
	puts("");

	// %x
	puts("%x");
	printf("%x\n", 1000);
	puts("");

	// %X
	puts("%X");
	printf("%X\n", 1000);
	puts("");

	// %%
	puts("%%");
	printf("%%\n");
	puts("");

	// width
	puts("width with convertion");
	printf("%d|\n", 50);
	printf("%5d|\n", 50);
	printf("%5c|\n", 'a');
	printf("%5s|\n", "oi");
	puts("");

	// flags
	// flag: '-'
	puts("flag: '-'");
	printf("%-d|\n", 50);
	printf("%-5d|\n", 50);
	printf("%-5c|\n", 'a');
	printf("%-5s|\n", "oi");
	puts("");

	// flag: '0'
	puts("flag: '-'");
	printf("%0d|\n", 50);
	printf("%05d|\n", 50);
	printf("%05d|\n", 123456);
	printf("%05d|\n", -123456);
	// printf("%05c|\n", 'a'); // Não funciona
	// printf("%05s|\n", "oi"); // Não funciona
	puts("");

	// flag: '.'
	puts("flag: '.'");
	printf("%.5s|\n", "Hello World");
	printf("%.10s|\n", "Hello World");
	printf("%8.5d|\n", 123);
	printf("%-8.5d|\n", 123);
	puts("");

	// flag: '#'
	puts("flag: '#'");
	printf("%#x\n", 200);
	printf("%#X\n", 200);
	puts("");

	// flag: ' ' (espaço)
	puts("flag: ' ' (espaço)");
	printf("%d\n", 42);
	printf("%d\n", -42);
	printf("% d\n", 42);
	printf("% d\n", -42);
	printf("% 5d\n", 42);
	printf("% 5d\n", -42);
	puts("");

	// flag: '+'
	puts("flag: '+'");
	printf("%+d\n", 42);
	printf("%+d\n", -42);
	printf("%+05d\n", 42);
	printf("%+05d\n", -42);
	puts("");

	// Combinação de flags
	printf("%5d|\n", 42);	// O normal é formatação a direita
	printf("%-5d|\n", 42);
	printf("%05d|\n", 42);
	printf("%.5d|\n", 42);	// Quando tem ponto, é só pra número, então sempre vai ter zeros a esquerda
	printf("%-5.2d|\n", 42);
	printf("%-5.3d|\n", 42);
	printf("%5.2d|\n", 42);
	printf("%5.3d|\n", 42);
}
