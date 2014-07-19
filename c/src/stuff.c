/*
 ============================================================================
 Name        : stuff.c
 Author      : George Amaya
 Version     : dev1
 Copyright   : GNU GPL v3
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>

int add2(int a, int b);

int main(void){
	int nums[2];
	int loop =0;
	for(loop=0;loop<20;loop+= 2){
		printf("%d\n", &loop);
	}
	loop = 0;
	do{
		printf("%d\n", &loop);
		loop++;
	}while(loop<5);

	printf("Enter two numbers:\n");

	scanf("%d", &nums[0]);
	scanf("%d", &nums[1]);

	if(nums[0] > nums[1]){
		printf("greater");
	}else{
		printf("something else\n");
	}

	printf("The sum is %d\n", add2(nums[0],nums[1]));

	system("PAUSE");
	return 0;
}

int add2(int a, int b){
	return a + b;
}
