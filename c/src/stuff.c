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
	int i;
	for(i=0;i<20;i+= 2){
		printf("%d\n", i);
	}
	i = 0;
	do{
		printf("%d\n", i);
		i++;
	}while(i<5);

	printf("Enter two numbers:\n");

	scanf("%d", &nums[0]);
	scanf("%d", &nums[1]);

	if(nums[0] > nums[1]){
		printf("First number is greater than second.\n");
	}else if(nums[0] < nums[1]){
		printf("First number is less than second.\n");
	}else{
		printf("First number is equal to second\n");
	}

	printf("The sum is %d\n", add2(nums[0],nums[1]));
	lua_State *L;
	L = luaL_newstate();
	luaL_openlibs(L);
	luaL_loadfile(L, "programs.lua");
	lua_pcall(
		L,
		number_of_args,
		number_of_returns,
		errfunc_idx
		);
	lua_pcall(
		L,
		number_of_args,
		number_of_returns,
		errfunc_idx
		);
	lua_close(L);
	printf("Press any key to exit...");

	getch();
	return 0;
}

int add2(int a, int b){
	return a + b;
}
