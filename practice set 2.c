// 1. write a c program to find the average of 3 numbers.

/*#include<stdio.h>
int main(){
	int a,b,c;
	float avg;
	printf("Enter three number : \n");
	printf("-----------------------\n");
	printf("Enter the first number\n");
	scanf("%d",&a);
	printf("Enter the second number\n");
	
	scanf("%d",&b);
	printf("Enter the third number\n");
	scanf("%d",&c);
	avg=a+b+c/3.0;
	printf("Average of Three Numbers : %f",avg);
	return 0;
}*/


// 2. write a progrm to check the given character is digit or not

/*#include<stdio.h>
int main(){
	char ch;
	
	printf("Enter the character :\n ");
	printf("----------------------------\n");
	printf("Enter the input : \n");
	scanf("%c",&ch);
	if(ch>='0' && ch<='9')
	{
		printf("This is a Digit %c");
	}
	else
	{
		printf("This is not a Digit %c");
		
	}
return 0;
}*/


// 3. write a c program to print the smallest number

#include<stdio.h>
int main(){
	int num1,num2;
	printf("program for printing smallest number\n");
	printf("-------------------------------------\n");
	printf("Enter your first number\n");
	scanf("%d",&num1);
	printf("Enter your second number\n");
	scanf("%d",&num2);
	printf("The Smallest number between these two number is :%d\n",num1<num2? num1:num2);
	return 0;
	
}
