#include<stdio.h>
#include<conio.h>
void printOdd(int n)
{
	if(n==1)
	{
		printf("%d ",2*n-1);
	}
	else if(n>1)
	{
	
		printf("%d ",2*n-1);
			printOdd(n-1);
	}
}
int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	printOdd(n);
	getch();
	return 0;
}
