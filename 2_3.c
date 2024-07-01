/*
 * 2_3.c
 * 
 * Ввести 2 числа и найти их разность
 * 
 * Нужно напечатать разность 2 чисел
 * 
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, d;
	printf("Input 2 numbers: \n");
	scanf("%d%d",&a,&b);
	d = a - b;
	printf("%d\-%d\=%d\n",a,b,d);
	return 0;
}

