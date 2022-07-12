#include <stdio.h>

void myCrazyFunnyStart(void) __attribute__ ((constructor));

/**
 * myCrazyFunnyStart - function that executes before the
 * main with the constructor attribute
 * funfact >> we also have a destructor attribute to execute
 * code after the end of a main()
 * notice that prototypes must me declared before
 */

void myCrazyFunnyStart(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
