#include<stdio.h>
#include<conio.h>
void printEven(int n)
{
	if(n==1)
	{
		printf("%d ",2*n);
	}
	else if(n>1)
	{
	    printEven(n-1);
		printf("%d ",2*n);
		
	}
}
int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	printEven(n);
	getch();
	return 0;
}
