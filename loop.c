// for loop
/*
for(initilisation;condition;updation){
    // do something
}
*/

// so if we want to print the same things multiple times then we can write code like this..


/*#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=5;i=i+1){
        printf("Hello world\n");
    }
}*/

// how to print number from 1 to 100

/*#include<stdio.h>
int main(){
    int i;
    for(i=1;i <=100 ; i=i+1){
       printf("%d\n",i); 
    }
    
    return 0;
}*/

// how to print the number in descending order

/*#include<stdio.h>
int main(){
    int i;
    for(i=10; i>=1; i=i-1){
        printf("%d\n",i);
    }
    return 0;
}*/

// print the numbers from 0 to 10:

#include<stdio.h>
int main(){
    int i;
    for(i=0;i<=100;i=i+1){
        printf("%d\n",i);
    }
    
}