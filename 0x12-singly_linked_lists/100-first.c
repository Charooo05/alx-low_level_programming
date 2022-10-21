#include <stdio.h>

/**
 * function_before_main - prints statement before running main func
 */

void function_before_main(void) __attribute__((constructor))
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
