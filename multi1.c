#include<stdio.h>
int main()
{
	int i,j,t,m;
	printf("\n Enter the number:");
	scanf("%d",&i);
	for(j=1;j<=i;j++)
	{
		if(i%j==0)
		{
			printf("\nthe factors are %d\n",j);
		}
	}
	if(i%2==0)
	{
		printf("\nThe number is even: %d\n",i);
	}
	else
	{
		printf("\nthe number is odd:  %d\n",i);
	}
	i>=0 ? printf("\n The number is positive"): printf("\nThe number is negative \n");
	
	t=i*i;
	printf("\nThe square of given number is: %d\n",t);
	m=i*i*i;
	printf("\nThe cube of given number is: %d\n",m);

return 0;
}
