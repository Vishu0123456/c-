// write a c program is to check the number is even or odd ..


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

/*#include<stdio.h>
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
}*/

/*#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	a%2==0?printf("even"):printf("odd");
}*/

// write a c program to find the greatest of the three number take the input from user.

/*#include<stdio.h>
int main(){
	int a, b, c;
    printf("Enter three numbers: \na: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    if (a > b && a > c)
        printf("Biggest number is %d", a);
    if (b > a && b > c)
        printf("Biggest number is %d", b);
    if (c > a && c > b)
        printf("Biggest number is %d", c);
  
    return 0;
}*/

// write a c program to check the given number is divisible 3 and 5 

/*#include<stdio.h>
int main(){
	int a;
	printf("Enter your number : ");
	
	scanf("%d",&a);
if (a % 3 == 0 && a % 5 == 0)
{
	printf("The number is divisible by 3 and 5 %d" ,a);
 } 
else if(a%3==0 || a%5==0)
{
 	printf("The number is not divisble by 3 or 5 %d ",a);
 }
return 0;	
}*/

// taking input from user 

/*#include<stdio.h>
int main(){
int a;
printf("Enter your number : ");
scanf("%d",&a);
switch(a){
	case 1:
		printf("Jan");
		break;
	case 2:
		printf("Feb");
		break;
	default:
		printf("Invalid");
}
	
	
}*/

// write a c program and perform all arithmetic operation using switch case

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    char op;
    printf(" 1.Addition(+)\n 2.Subtraction(-)\n 3.Multiplication(*)\n 4.Division(/)\n");
    printf("Enter the values of a & b: ");
    scanf("%d %d",&a,&b);
    printf("Enter your Choice : ");
    scanf("%d ",&op);
    switch(op)
    {
    case 1:
        printf("Sum of %d and %d is : %d",a,b,a+b);
        break;
    case 2	:
        printf("Difference of %d and %d is : %d",a,b,a-b);
        break;
    case 3	:
        printf("Multiplication of %d and %d is : %d",a,b,a*b);
        break;
    case 4	:
        printf("Division of Two Numbers is %d : ",a/b);
        break;
    default	:
        printf(" Enter Your Correct Choice.");
        break;
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int a, b, c;
    char op;
    printf("Enter a and b:");
    scanf("%d%d",&a,&b);
    do
    {
        
        printf("+ Addition\n");
        printf("- Subtraction\n");
        printf("* Multiplication\n");
        printf("/ Division\n");
        printf("%% Remainder\n");
        printf("E Exit\n");
        printf("Enter your choice :");
        getchar();
        op=getchar();
        if(op=='E'||op=='e')
            exit(1);
        switch(op)
        {
        case '+':
            printf("Addition\n");
            c=a+b;
            printf("Sum of Two Number is = %d\n",c);
            break;
        case '-':
            printf("Subtraction\n");
            c=a-b;
            printf("Difference of Two Number is = %d\n",c);
            break;
        case '*':
            printf("Multiplication\n");
            c=a*b;
            printf("Product of Two Number is = %d\n",c);
            break;

        case '/':
            printf("Division\n");
            c=a/b;
            printf("Quotient=%d\n",c);
            break;
        case '%':
            printf("Remainder\n");
            c=a%b;
            printf("Remainder=%d\n",c);
            break;
        default:
            printf("Invalid Option\n");
            break;
        }	
    }
    while(1);
return 0;
}*/

/*#include<stdio.h>
int main() {
 
    int x, y;

    printf("Enter two Number : ");
    scanf("%d%d", &x, &y);
 
    char op;
    printf("Enter the Operator [ +, -, *, /, %%] : ");
    scanf(" %c", &op);
 
    switch (op)
    {
    case '+':
       
        printf("Addition of given number is : %d + %d = %d \n", x, y, x+y);
        break;
    
    case '-':
        
        printf("Subtraction of given number is : %d - %d = %d \n", x, y, x-y);
        break;
    
    case '*':
        // Product/Mutliplication ('*')
        printf("Multiplication of given number is : %d * %d = %d \n", x, y, x*y);
        break;
    
    case '/':
      
        printf("Division: %d / %d = %d \n", x, y, x/y);
        break;
 
    default:
        
        printf("ERROR: Invalid Operation, Please try again\n");
 
        
        break;
    }
 
    return 0;
}*/








