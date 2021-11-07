#include<stdio.h>
char*test();
main() {
	printf("%s\n", test());

	*(test() + 1) = 'A';

	printf("%s\n", test());
}
char* test()
{
	static char name[8] = "123456";
	return(name);
}