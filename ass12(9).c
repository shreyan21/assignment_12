#include<stdio.h>
#include<conio.h>
void octal(int n)
{  
	
	 if(n>=8)
	{
		octal(n/8);
		printf("%d",n%8);
	}
	else
	{
		printf("%d",n);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("It's octal is : ");
	octal(n);
	getch();
	return 0;
}

