#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
/*
 * write line of code here
 * Remeber:
 * you're not allowed to use a
 * you're not allowed to modify p
 * only one statement
 * you are not allowed to code anything else
 *  than this line of code
 */
	*(p = 5) = 98;
	/*.....so that this points 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
