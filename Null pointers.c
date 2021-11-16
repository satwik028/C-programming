//NULL pointer
#include<stdio.h>
int main()
{
	int *ptr;
	ptr=NULL;
	printf("Adress stored by ptr=%d",ptr);
	printf("\nValue by ptr=%d",*ptr);
	
	return 0;
}
