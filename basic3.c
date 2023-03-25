/*#include<stdio.h>
void main(){
	int a=(1,2,3,4,5);
	printf("%d",a);
}*/

// write a c program to check the input taken by user is even or odd.


/*#include<stdio.h>
int main(){
	int a;
	printf("Enter your number : ");
	scanf("%d",&a);
if(a%2==0)
{
	printf("%d The Given Number is even",a);
	
}
else{
	printf("%d The Given Number is odd",a);
}
return 0;
}*/

// write a c program to check the given number is divisible by 4 and 6 .

#include<stdio.h>
int main(){
	int a;
	printf("Enter your number : ");
	
	scanf("%d",&a);
if (a % 4 == 0 && a % 6 == 0)
{
	printf("The number is divisible by 4 and 6 %d" ,a);
 } 
else{
 	printf("The number is not divisble by 4 and 6 %d",a);
 }
return 0;	
}
