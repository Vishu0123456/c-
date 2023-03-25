// EXAMPLES OF EQUAL TO EQUAL TO OPERATORS ==

// IN C LANGUAGE TRUE MEANS (1,2,3,...) AND FALSE MEANS 0.

/*# include<stdio.h>
int main(){
	printf("%d",4==4);
	return 0;
}*/

// EXAMPLES OF GREATER THAN OPERATORS:


/*# include<stdio.h>
int main(){
	printf("%d",4>3);
	return 0;
}*/

/*#include<stdio.h>
int main(){
	printf("%d",3>4);
	return 0;
}*/

/*#include<stdio.h>
int main(){
	printf("%d",4>3);
	return 0;
}*/

/*#include<stdio.h>
int main(){
	printf("%d",3>=3);
	return 0;
}*/

// EXAMPLES OF LESS THAN OPERATORS:

/*#include<stdio.h>
int main(){
	printf("%d",5<3);
	return 0;
}*/

/*#include<stdio.h>
int main(){
	printf("%d",5<5);
	return 0;
}*/

/*#include<stdio.h>
int main(){
	printf("%d",5<=5);
	return 0;
}*/

/*#include<stdio.h>
int main(){
	printf("%d",2!=1);
	return 0;
}*/

/*#include<stdio.h>
int main(){
	printf("%d",1!=1);
	return 0;
}*/

// EXAMPLES OF LOGICAL OPERATOR (&&):

/*#include<stdio.h>
int main(){
	printf("%d",3>4 && 4>5);
	return 0;
}*/

/*#include<stdio.h>
int main(){
	printf("%d",3>4 || 4>2);
	return 0;
}*/

/*#include<stdio.h>
int main(){
	printf("%d",!(3>1));
	return 0;
}*/  

// ASSIGNMENT OPERATORS:

/*#include<stdio.h>
int main(){
	int a = 2;
	int b = 3;
	a = a+b;
	printf("%d",a);
	return 0;
}*/

// practice question:

// 1. write a c program to check if a number is divisible by 2 or not.

/*#include<stdio.h>
int main(){
	int a;
	printf("Enter your number : ");
	scanf("%d",&a);
	printf("%d",a % 2 == 0);
	return 0;
}*/

// 2. write a c program to check the number is even or odd.

/*#include<stdio.h>
int main(){
	int a;
	printf("Enter your number : ");
	scanf("%d",&a);
	printf("%d",a % 2 == 0);
	return 0;
}*/

// 3. Are the following is write or wrong .
// a. int a=8^8
// b. int x;int y =x;
// c. int x,y = x;
// d. char stars = '**';

/*#include<stdio.h>
int main(){
	printf("%d",8^8);//it will give result as 0 because ^ is bitwise operator.
	
	return 0;
}*/

/*#include<stdio.h>
int main(){
	int x;	int y=x;
	printf("%d",y);
	return 0;
}*/
// c and d both are invalid statements.

// 4. write a c program to print true or false for following statements.

// a. if it's sunday & it's snowing ----> True

/*#include<stdio.h>
int main(){
	int issunday = 0;
	int issnowing = 1;
	printf("%d",issunday && issnowing);
	return 0;
}*/

// b. if it's monday or it's raining -->true

#include<stdio.h>
int main(){
	int ismonday = 0;
	int israining = 0;
	printf("%d",ismonday || israining);
	return 0;
}

