
// how to print interchange  value of variable 

/*#include<stdio.h>
void swap(int a, int b);
int main(){
    int a1,b1;
    printf("Enter two values\n");
    scanf("%d %d",&a1,&b1);
    swap(a1,b1);
}
void swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
}*/

/*
write a user define function to print value of the input in words like if the input is 1 print 
it as one input value range is  1 to 7 use call by value method.

*/

/*#include<stdio.h>
int name(int num);
int main(){
    int n;
    scanf("%d",&n);
    name(n);
}
int name(int num){
    switch (num){
    case 1:
        printf("one");
        break;
    case 2:
        printf("two");
        break;
    case 3:
        printf("three");
        break;
    case 4:
        printf("four");
        break;
    case 5:
        printf("five");
        break;
    case 6:
        printf("six");
        break;
    case 7:
        printf("seven");
        break;
    }
   
}*/

/*
write a user defune function to check the number is adam or not usingcall by value method  check inside the main function if given number is adm or not

*/

/*#include<stdio.h>

    int rev(int num)
    {
        int rev = 0;
        while (num != 0)
        {
            rev = rev * 10 + num % 10;
            num /= 10;
        }
        return rev;
    }
    int sq (int n1){
        return (n1*n1);
    }
    int main(){
        int a,asq,reva,revasq,revasq2;
        scanf("%d",&a);
        asq=sq(a);
        reva=rev(a);
        revasq=sq(reva);
        revasq2 =rev(revasq);
        if(revasq2==asq){
            printf("Adam number");

        }else{
            printf("Not a adam number");
        }

    }*/


// ********************************pointers*******************************

/*#include<stdio.h>
int main(){
    int a ,  *a1;
    scanf("%d",&a);
    a1=&a;
    printf("%d\n",a);
    printf("%d\n",&a);
    printf("a1=%d",a1);
    printf("a1 value=%d",*a1);
;}*/

/*#include<stdio.h>
int sum(int *a,int *b);
int main(){
    int a1,b1;
    scanf("%d %d",&a1,&b1);
    printf("%d",sum(&a1,&b1));
}
int sum(int *a,int *b){
    return *a+*b;
}*/

// write a user define function to swap two numbers by calling refference method

/*#include<stdio.h>
int sum(int *a,int *b);
int main(){
    int a1,b1;
    scanf("%d %d",&a1,&b1);
    printf("%d",sum(&a1,&b1));
}
int sum(int *a,int *b){
  int temp;
    temp = *a;
    *a=*b;
    *b=temp;
    scanf("%d %d",&a,&b);
    printf("%d %d",  *a,*b);
}
*/

// write a user define funnction to find the factorial of numbers by using the calling refference method.

//#include<stdio.h>
     
