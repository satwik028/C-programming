//constant pointer demo
#include<stdio.h>
int main()
{
	int a=90,b=100;
	int *const ptr=&a;//So ptr will only store adress of a and it cannot be changed after
	printf("Value of a using ptr=%d",*ptr);
	return 0;
}
