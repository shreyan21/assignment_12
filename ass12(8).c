#include<stdio.h>
#include<conio.h>
void binary(int n)
{
	if(n==1)
	{
		printf("01");
	}
	else if(n==0)
	{
		printf("000");
	}
	else if(n>1)
	{
		binary(n/2);
		printf("%d",n%2);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("It's binary is : ");
	binary(n);
	getch();
	return 0;
}

