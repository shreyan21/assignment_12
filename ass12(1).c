#include<stdio.h>
#include<conio.h>
void f(int n)
{
	if(n==1)
	printf("%d ",n);
	else if(n>1)
	{
		f(n-1);
		printf("%d ",n);
	}
}
int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	f(n);
	getch();
	return 0;
	
}
