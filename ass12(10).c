#include<stdio.h>
#include<conio.h>
void reverse(int n)
{
	if(n)
	{  
	printf("%d",n%10);
		reverse(n/10);
		
	}
}
int main()
{
	int x;
	scanf("%d",&x);
	printf("Reverse of %d is ",x);
	if(x<0)
	{
		x=-x;
		printf("-");
	}
	
	reverse(x);
	getch();
	return 0;
}
