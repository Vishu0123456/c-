

// this while statement print numbers 10 down to 1

/*#include<stdio.h>
int main(){
	int a=10;
	while (a>0){
		printf("%d",a);
		a=a-1;
	}
}*/

// 

/*#include<stdio.h>
int main(){
	int a=10;
	while(a>0){
	a=a-1;
	printf("%d\n",a);
	}
	
	
}*/


/*#include<stdio.h>
int main(){
	int i=0;
	while(i<5){
		printf("hii\n");
		i++;
	}
}*/

/*#include<stdio.h>
int main(){
	int gfg1=1;
	int gfg2=1;
	while(gfg1<10){
		gfg2 = gfg2+1;
		printf("Vishwajeet");
	}
	return 0;
}*/

// write a c program to print the multiplication table 

/*#include<stdio.h>
int main(){
	int a,i=1;
	printf("Enter the number: \n");
	scanf("%d",&a);
	printf("The Multiplication of the given number is:\n");
for (i=1;i<=10;i++){
		printf("%d*%d=%d\n",a,i,(a*i));
	}
}*/

// write a c program to print the sum of n natural number using for loop.

/*#include<stdio.h>
int main(){
	int a,i,s=0;
	printf("Enter your number\n");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		s=s+i;
	}
	printf("The sum of n natural number is\n");
	printf("%d",s);
}*/

// write a c program to find sum of all the even numbers from 0 to 20;

/*#include<stdio.h>
int main(){
	int a,i,s=0;
	printf("Enter the even numbers \n ");
	scanf("%d",&a);
	for(i=0;i<=a;i=i+2){
		s=s+i;
	}
	printf("The sum of even numbers from 0 to 20 is \n");
	printf("%d",s);
}*/

// write a c program to check the given number is perfect or not;

/*#include<stdio.h>
int main(){
	int a,i,s=0;
	scanf("%d",&a);
	for(i=1;i<a;i++){
		if(a%i==0){
			s=s+i;
			
		}else{
			continue;
		}
	}
	if(s==a){
		printf("The given number is a perfect number",a);
		
	}else{
		printf("the given number is not a perfect number",a);
	}
}



