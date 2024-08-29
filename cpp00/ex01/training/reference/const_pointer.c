#include <stdio.h>

int main()
{
	int a = 42, b;
	// const int *ptr = &a;
	int *ptr = &a;
	int& ref = a; //c++ stuff: reference (alias to the existing variable)
	// (constant unreferanced pointer)

	a = 50;
	b = 100;
	ptr = &b;
	*ptr = 200; // possible only becasue ptr is not a 'const int *ptr'
	printf("a: %d\n", a);
	printf("ptr: %p\n", ptr);
	printf("*ptr: %d\n", *ptr);
	printf("b: %d\n", ref);
	return 0;
}
