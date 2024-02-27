#include<stdio.h>
void fib(int n1,int n2,int n)
{
	int n3;
	if(n>0)
	{
		n3=n2+n1;
		printf("display no",n3);
		n3=n2;
		n2=n1;
		fib(n1,n2,n-1);
		
	}
}

int main()
{
int n,n1,n2,n3;
n1=0;
n2=1;
printf("enter the number of times:");
scanf("%d","%d",&n,&n);
fib(n1,n2,n-2);
}
