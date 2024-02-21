#include<stdio.h>
int main() {
	float s1,s2,s3,s4,s5,total_marks,agg; //declaration of variable
	printf("enter the marks 5 subjects:\n"); //taking marks as input from user
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	if(s1 && s2 && s3 && s4 && s5 >40) {
		printf("\nYou have passed!");
		total_marks=s1+s2+s3+s4+s5; //total marks obtained
		agg=(total_marks/500)*100; //the percentage
		printf("\nThe Percentage:%f",agg);
		if(agg>75) {  //checking for grade using conditions
			printf("\n You have passed with distinction");
		} else if(agg<75 && agg>60) {
			printf("\nYou have passed with first class");
		} else if(agg<60 && agg>50) {
			printf("\nYou have passed with second class");
		} else if(agg<50 && agg>40) {
			printf("\nYou have passed with third class");
		}  //if the conditions are not satisfied else condition will be executed.
                            else {
			printf("\nYou have failed!");
		}
	}
	return 0;
}

