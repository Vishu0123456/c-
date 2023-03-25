// 2nd lecture of array in class 24/03/2023

/*write a c program to perform addition of two 1 dimensional array and store the value in new array.*/

/*#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array :");
    scanf("%d",&size);
    int a[size],b[size],c[size],i;
    printf("Enter the elements for the array A:");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);

    }
    printf("\n");
    printf("Enter the elements for array B:");

    for(i=0;i<size;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<size;i++){
        c[i] = a[i]+b[i];
       
    }
    for(i=0;i<size;i++){
        printf(" Sum is  %d \n",c[i]);
    }
    
}*/

// write a c program to perform deletion of a particular position element in array.

/*#include<stdio.h>
int main(){
    int  a[100],position,i,n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);}
        printf("Enter the position to be deleted");
        scanf("%d",&position);
    
    for(i=position-1;i<n;i++){
        a[i] = a[i+1];
    }

    for(i=0;i<n-1;i++){
        printf("%d",a[i]);
    }
   
    
}*/

/*#include<stdio.h>
int main(){
    int a[3][3],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("a[%d][%d]---",i,j);
            scanf("%d",&a[i][j]);
        }
    }
        printf("\n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }*/

// perform addition of 2 two-Dimensonal matrix and storw in a new store

#include<stdio.h>
int main(){
    int a[3][3],b[3][3],i,j,sum[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("a[%d][%d]---",i,j);
            scanf("%d",&a[i][j]);
        }
    }
        printf("Enter the element for 2D array B\n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("b[%d][%d]---",i,j);
                scanf("%d",&b[i][j]);
            }
           // printf("\n");
        }

        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                sum[i][j] = a[i][j]+b[i][j];
            }
        }
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf(" %d ",sum[i][j]);}
                printf("\n");
            
        }
}