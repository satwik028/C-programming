//void pointer demo
#include<stdio.h>
int main()
{
	int x=79;
	float y=79.123456;
	void *ptr;
	ptr=&x;
	printf("Integer value of x=%d",*(int*)ptr);
	ptr=&y;
	printf("\nFloat value of y=%f",*(float*)ptr);
	printf("\nSize of ptr is : %d",sizeof(ptr));
	return 0;
	
}
