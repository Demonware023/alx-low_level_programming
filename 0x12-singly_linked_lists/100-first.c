#include <stdio.h>

/**
  * pre_main - Pre main fucntion.
  *
  * __attribute__((constructor)): Prints before main is executed.
  *
  * Return: Always 0 Success.
  */

void __attribute__((constructor)) pre_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
