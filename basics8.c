/*#include<stdio.h>
int main(){
    int n =10;
    A:
    printf("%d",n);
    n = n-1;
    if (n>0)
    goto A;

}*/

// pattern print using print function.

/*#include<stdio.h>
int main(){
    printf("%5d\n",1);
    printf("%5d\n",12);
    printf("%5d\n",123);
    printf("%5d\n",1234);
    printf("%5d\n",12345);
}*/

/*#include<stdio.h>
void main(){
    sum();
}
void sum(){
    int a,b;
    printf("Enter your number : \n");
    scanf("%d %d",&a,&b);
    printf("%d The sum of numbers is : \n",a+b);
}*/

// write a user define function to find the factors of the given number 
/*#include<stdio.h>
#include<math.h>
void main(){
    factors();

}
void factors(){
    int a,b;
    printf("Enter your number : \n");
    scanf("%d",&a);
    for(b=1;b<=a;b++ ){
        if(a%b ==0)
        {
            printf("%d\n",b);
        }
    }
}*/

#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    printf("Enter your number : \n");
    scanf("%d %d",&a,&b);
    //int C=pow(a,b);
    printf("%d",(int)pow(a,b));
}

// write a user define function to count number of digits in a given input.

