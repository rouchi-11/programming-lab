#include<stdio.h>
int main()
{
	int i,j,sum=0;
	printf("Enter the number to be checked: ");
	scanf("%d",&i);
	for(j=1;i<j;j++)
	{
		if(i%j==0)
		{
			printf("\nThe factors are %d",j);
				sum+=j;
		printf("\nThe sum of the factors is%d",sum);
		}
		
	}

		if(sum=i)
		{
			printf("\nThe number is a perfect number that is%d",i);
		}
	return 0;
}
