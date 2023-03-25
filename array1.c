/*#include<stdio.h>
int main(){
    int A1[5]={11,12,13,14,15};
    int i;
    for(i=0;i<5;i++){
        printf("%d",A1[i]);
    }
}*/

// write a c program to take input from user using scanf and print the value in array
/*#include<stdio.h>
int main(){
    int A[5];
    int i;
    printf("enter your input for array values : \n");
    for(i=0;i<5;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<5;i++){
        printf("%d ",A[i]);
    }

}*/

// write a c program to find the total sum of array

/*#include<stdio.h>
int main(){
    int A[5] ;
    int i , sum =0;
    for(i=0;i<5;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<5;i++){
        printf("%d \n",A[i]);
        sum+=A[i];
    }
    printf("The total sum of array :");
    printf("%d",sum);

}*/

// considwer a array a1  which consist of 5 elemnts scan the value for the array and write a modify function to modify the value and multiply by 2

/*#include<stdio.h>
int main(){
    int a[5],i;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    modify(a);
}
void modify(int b[]){
    int i;
    for(i=0;i<5;i++){
        b[i]=a[i]*2
    }
    for(i=0;i<5;i++){
        printf("%d ",b[i]);
    }

}*/

// consider an array with number of element 8 get the input from the user to array. define  a function which display the only the even index value.
/*#include<stdio.h>
int main(){
    int A[8];
    int i;
    printf("Enter the value for the array :");
    for (i=0;i<5;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<5;i++){
        if(i%2==0){
        printf("%d",A[i]);}
    }

}*/

#include<stdio.h>
int main(){
    int s;
    printf("Enter the size of the array :");
    scanf("%d",&s);
    int a[s],i;
    for(i=0;i<s;i++){
        scanf("%d",&a[i]); 
    }
    for(i=0;i<s;i++){
       printf("%d",&a[i]);
    }
}