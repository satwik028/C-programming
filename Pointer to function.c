//Pointer function
#include<stdio.h>
int addition(int, int);
int main()
{
	printf("Adress of main = %d\n",main);
	int x,y;
	int sum;
	int (*ptr)(int,int);
	
	printf("\nEnter the value of X and Y\n");
	scanf("%d%d",&x,&y);
	
	ptr=addition;
	sum=(*ptr)(x,y);
	printf("\nSum of x and y=%d",sum);
		
	return 0;
}
int addition(int a,int b)
{
	int c=a+b;
	return c;
}
