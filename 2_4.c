/*
 * 2_4.c
 * 
 * На вход подается произвольное 4-значное число
 * 
 * Нужно напечатать среднее арифметическое 4 чисел
 * 
 */

#include <stdio.h>

int main(int argc, char **argv)
{
	int x;
	float average;
	printf("Input numbers from 1000 to 9999: \n");
	scanf("%d",&x);
	average = (x / 1000) + ((x % 1000) / 100) + ((x % 100) / 10) + (x % 10);
	average /= 4.;
	printf("%.2f\n",average);
	return 0;
}


