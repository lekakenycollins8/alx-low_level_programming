#include <stdio.h>
#include "lists.h"
/**
 * pre_main_message - Prints message before main function is executed
 */

void pre_main_message(void)
__attribute__((constructor));

void pre_main_message(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
