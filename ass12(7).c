#include<stdio.h>
#include<conio.h>
void f(int n)
{
	if(n==1)
	{
		printf("%d ",1);
	}
	else if(n>=2)
	{
		f(n-1);
		printf("%d ",n*n);
	}
}
int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	printf("Squares of first %d natural numbers : ",n);
	f(n);
	getch();
	return 0;
}
