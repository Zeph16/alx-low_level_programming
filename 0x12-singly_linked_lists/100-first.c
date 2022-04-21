#include <stdio.h>

void premain(void) __attribute__((constructor));

/**
 * premain - executes before main
 */
void premain(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");

}
