#include<stdio.h>
int main()
{
	int n,i,a[10];
	int even_sum=0,odd_sum=0;
	
	printf("size of an array:");
	scanf("%d",&n);
	printf("enter the array elements :");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0){
			even_sum=even_sum+a[i];
		}
		else{
			odd_sum=odd_sum+a[i];
		}
	}
	printf("The sum of even no in array=%d\n",even_sum);
	printf("The sum of odd no in array=%d\n",odd_sum);
	return 0;
	
}
