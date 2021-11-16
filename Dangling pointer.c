//Dangling pointer demo
#include<stdio.h>
int main()
{
	int a = 80;
	int *ptr=&a;

	printf("adress of a=%d",ptr);
	free(ptr);
	*ptr=NULL;//deallocate the memory

	return 0;
}
