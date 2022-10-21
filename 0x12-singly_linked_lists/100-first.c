#include <stdio.h>

/**
 * function_before_main - prints statement before running main func
 */

void __attribute__((constructor)) function_before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
