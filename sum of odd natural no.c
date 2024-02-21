#include<stdio.h>
int main()
{
int i,j,sum=0;
printf("enter the number of odd numbers to be added:");
scanf("%d",&j);
for(i=1;i<=j;i++)
{
	if(i%2!=0)
	{
		sum+=i;
	}
}
	printf("\nThe sum of given numbers of odd values is:%d\n",sum);

return 0;
}
