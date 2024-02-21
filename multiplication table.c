#include<stdio.h>
int main()
{
int i,j,t;
printf("enter the number for multiplication table:");
scanf("%d",&j);
for(i=1;i<=10;i++)
{
	t=j*i;
	printf("\nThe multiplication table is:%d\n",t);
	
	
}

return 0;
}
