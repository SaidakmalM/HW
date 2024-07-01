/*
 * 2_1.c
 * 
 * Ввести три числа, найти их сумму
 * 
 * Нужно напечатать сумму трёх чисел
 * 
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c, s;
	printf("Input 3 numbers: \n");
	scanf("%d%d%d",&a,&b,&c);
	s = a + b + c;
	printf("%d\+%d\+%d\=%d\n",a,b,c,s);
	return 0;
}

