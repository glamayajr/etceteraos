/*
 ============================================================================
 Name        : terminal.c
 Author      : George Amaya
 Version     : dev1
 Copyright   : GNU GPL v3
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int num1;
	int num2;
	int sum;
	int num = 0;
	int i;
	for(i=0;i<20;i+= 2){
		printf("%d\n", &i);
	}

	do{
	printf("%d\n", &num);
	num++;
	}while(num<5);
	printf("Enter two numbers:\n");

	scanf("%d", &num1);
	scanf("%d", &num2);

	if(num1 > num2){
		printf("greater");
	}

	sum = num1 + num2;

	printf("The sum is %d\n", sum);

	system("PAUSE");
	return 0;
}
