/*#include<stdio.h>
int main(){
    number();
}
void number(){
    int a,c=0;
    printf("Enter a number\n");
    scanf("%d",&a);
    while(a!=0){
        a/=10;
        c++;

    }
    printf("The number of digits in the given  number : %d",c);
}*/

/*#include<stdio.h>
int main(){
int c=sum();
int d=9;
int e=d-c;
printf("%d %d",c,e);
}
int sum(){
    int a,b;
    printf("input\n");
    scanf("%d %d",&a,&b);
    return  a+b;

}*/


//write a usser define function to find the factorial of the number and return the factorail value.

/*#include<stdio.h>
int factor()
int main(){
printf("factor =%d",factor());
}
int factors(){
    int a1,i,m=1;
    printf("Enter a number ");
    scanf("%d",&a1);
    for(i=1;i<=a1;i++){
        m= m*i;
    }
    return m;
}*/




#include<stdio.h>
int main(){
    int a;
    printf("Enter your number : ");
    scanf("%d",a);
    return 0;
}

// write a user define  c program to check the given numer is pallindrome or not.

/*#include<stdio.h>
int main(){
    int num,rev=0,remainder,t;
    printf("Enter your number ");
    scanf("%d",num);
    t=num;
    while (num!=0)
    {
        remainder=num/10;
        rev =rev*10+remainder;
        num/=10;

    }
    if(t==rev){
        printf("%d this is pallindrome number",t);

    }
    else{
        printf("%d this is not a pallindrome number",t);
    }
    
    return 0;
}*/