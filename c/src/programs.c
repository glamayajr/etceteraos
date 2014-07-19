/*
 * programs.c
 *
 *  Created on: Jul 19, 2014
 *      Author: Viper
 */

#include <string.h>
#include "programs.h"

char * help(arg){
	char out[100];
	if(arg == 1){
		strcpy(out, "Got a 1.\n");;
	}
	return out;
}
