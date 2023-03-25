// practice questions

// write a program to check if a student is passed or failed. marks>30 is pass & marks<=30 is fail.

/*#include<stdio.h>
int main(){
    int marks;
    printf("Enter your Marks : \n");
    scanf("%d",&marks);
    if (marks>30 && marks <=100){
        printf("You are pass\n");
    }
    else if(marks==30 && marks <=100){
        printf("You are Fail\n");
    }
    else{
        printf("Beta tumse na hopayega");
    }
    return 0;
}*/

// solving this question using ternary operations

/*#include<stdio.h>
int main(){
    int number;
    printf("Enter your Marks :\n");
    scanf("%d",&number);

    number>30 ? printf("You are pass"): printf("You are fail");
    return  0;
}*/

/* write a c program to give grades to student 
marks<30 is c
30<=marks<70 is b
70<=marks<90 is A
90<=marks<=100 is A+*/

/*#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks\n");
    scanf("%d",&marks);
    if (marks<30){
        printf("Grade : E\n");
    }
    else if(marks<=40 && marks<50){
        printf("Grade : C\n");
    }
    else if(marks>50 && marks<60){
        printf("Grade : B\n");
    }
    else if(marks>60 && marks<70){
        printf("Grade : B+\n");
    }
    else if(marks>70 && marks<80){
        printf("Grade : A\n");
    }
    
    else if(marks>80 && marks<90){
        printf("Grade : A+\n");
    }
    

    else{
        printf("Grade : O");
    }

}*/

/*#include<stdio.h>
int main(){
    int x=2;
    if(x=1){
        printf("x is equal to 1");

    }else{
        printf("x is not equal to 1");
    }
}*/

// write a c program to check the given character is in uppercase or in lowercase

#include<stdio.h>
int main(){
    char ch;
    printf("Enter your character : \n");
    scanf("%s",&ch);
    if(ch >='A' && ch <= 'Z'){
        printf("Upper Case\n");

    }
    else if(ch >='a' && ch <= 'z'){
        printf("Lower Case\n");
    }
    else{
        printf("This is not a charcter ");
    }

}
