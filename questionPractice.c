//Write a C program to enter two numbers and find their sum.

/*#include<stdio.h>
int main(){
    int a,b,sum;
    printf("Enter your first number : \n");
    scanf("%d",&a);
    printf("Enter your second number :\n");
    scanf("%d",&b);

    sum = a+b;

    printf("The sum of two number  is   %d and %d   =%d\n  ",a,b,sum);
}
*/  

// Write a C program to enter two numbers and perform all arithmetic operations.

/*#include<stdio.h>
int main(){
    int a,b,c;
    char op;
    printf("Enter your first number :\n");
    scanf("%d",&a);
    printf("Enter your second number :\n");
    scanf("%d",&b);
    printf("Choose any opertaors\n");
    printf("1. ADDITION(+)\n 2. SUBTRACTION(-)\n 3. MULTIPLY(*)\n 4. DIVISION(/)\n 5. MODULO(%)\n:");
    scanf("%d",&op);
    switch(op)
        {
        case 1:
            printf("Addition\n");
            c=a+b;
            printf("Sum of Two Number is = %d\n",c);
            break;

        case 2:
            printf("Subtraction\n");
            c=a-b;
            printf("Difference of Two Number is = %d\n",c);
            break;


        case 3:
            printf("Multiplication\n");
            c=a*b;
            printf("Multiplication of Two Number is = %d\n",c);
            break;


        case 4:
            printf("Division\n");
            c=a/b;
            printf("Division of Two Number is = %d\n",c);
            break;

        case 5:
            printf("Modulos\n");
            c=a%b;
            printf("Modulo of Two Number is = %d\n",c);
            break;

        
        
        

        }
    return 0;

}*/

/*#include<stdio.h>
int main(){
    int a,b,sum,multi,mod,diff;
    float div;
    printf("Enter your first number :\n");
    scanf("%d",&a);
    printf("Enter your second number :\n ");
    scanf("%d",&b);
    sum = a+b;
    diff = a-b;
    multi = a*b;
    mod = a%b;
    div = (float)a/b;

    printf("Sum of two numbers is :%d\n",sum);
     printf("Difference of two numbers is :%d\n",diff);
      printf("Multiplication of two numbers is :%d\n",multi);
       printf("Modulos of two numbers is :%d\n",mod);
        printf("Division of two numbers is :%f\n",div);
}
*/

//Write a C program to enter length and breadth of a rectangle and find its perimeter.

/*#include<stdio.h>
int main(){
    int a,b;
    printf("Enter length of rectangle :\n");
    scanf("%d",&a);
    printf("Enter breadth of rectangle :\n");
    scanf("%d",&b);
    printf("Perimeter of given Rectangle is :%d units",2*(a+b));

    return 0;
}*/

// Write a C program to enter length and breadth of a rectangle and find its area.

/*#include<stdio.h>
int main(){
    int a,b;
    printf("Enter your length : \n");
    scanf("%d",&a);
    printf("Enter your breadth :\n");
    scanf("%d",&b);
    printf("Area of the given Rectangle is :%d",a*b);
     return 0;


}*/

//Write a C program to enter radius of a circle and find its diameter, circumference and area.

/*#include<stdio.h>
int main(){
    float a;
    printf("Enter the radius of the given circle : \n");
    scanf("%f",&a);
    printf("Diameter of the given circle is :%.2f units\n ",2*a);
    printf("Circumfrence of the given circle is :%.2funits\n",2*3.14*a);
    printf("Area of the given circle is :%.2f sq.units",3.14*a*a);

}*/

//
/*#include<stdio.h>
int main()
{
    int a=8;
    if(a>10){
        if(a%2==0){
            printf("Even");
        }else{
            printf("Odd");
        }
        return 0;
    }
}*/

#include<stdio.h>
int main(){
    int i=1;
    while(i<=10){
        printf("%d",i);
    }
    return 0;
}