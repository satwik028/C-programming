//wild pointer
#include<stdio.h>
int main()
{
	float a=56.890;
	float *ptr;
	*ptr=123.456;
	printf("New value of pointer is = %f",*ptr);
	printf("\nSize of ptr is : %d",sizeof(ptr));
	return 0;
}
