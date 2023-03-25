// factorial of a number 

/*#include<stdio.h>
int fact(int n);
int main(){
    int a;
    scanf("%d",&a);
    printf("%d",fact(a));}

int fact(int n){
    if(n==1){
        return 1;}
    else{
        return n*fact(n-1);
    }
}*/

// write a c program to recursion function to print the sum of n natural number 

/*#include <stdio.h>

int sum(int n);

int main() {

  int num;
  printf("Enter your number: ");
  scanf("%d", &num);
  printf("Sum = %d", sum(num));
  return 0;
}

int sum(int n) {
  if (n != 0){
    return n + sum(n - 1);}
  else{
    return n;}
}*/

// write a user define function to reverse a number using recurrsion function

/*#include<stdio.h>
int r=0;
int rev(int n);
int main(){
    int a,sum;
    printf("Enter your number:");
    scanf("%d",&a);
    printf("The number after reversing is :%d",rev(a));


}
int rev(int n){
    int d;
    if(n==0){
    return r;}
    else{
        d=n%10;
        r=r*10+d;
        return rev(n/10);
    }
}
*/
#include<stdio.h>
int main(){
    int a=1,b=1,d=1;
    printf("%d, %d, %d",++a + ++a + a++, a++ + ++b, ++d + d++ + a++);
}


