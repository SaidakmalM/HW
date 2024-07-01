/*
 * 2_2.c
 * 
 * Ввести три числа, найти их сумму и произведение
 * 
 * Нужно напечатать сумму и произведение трёх чисел * 
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c, s, z;
	printf("Input 3 numbers: \n");
	scanf("%d%d%d",&a,&b,&c);
	s = a + b + c;
	printf("%d\+%d\+%d\=%d\n",a,b,c,s);
	z = a * b * c;
	printf("%d\*%d\*%d\=%d\n",a,b,c,z);
	return 0;
}

