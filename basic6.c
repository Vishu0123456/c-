// how to find the sum of the guven number ex : 123 number is taken from user and the sum - 1+2+3 =6

/*#include<stdio.h>
int main(){
	int a,d,sum=0;
	scanf("%d",&a);
	while(a!=0){
	
	d=a%10;
	a=a/10;
	sum=sum+d;
}
printf("The Sum of The given  number is : %d",sum);
}*/

/*#include<stdio.h>
int main(){
int i ,j;
for(i=0;i<5;i++){
	printf("%d,%d\n",i,j);
}
}*/

// print the pattern

#include<stdio.h>
int main(){

   int i, j, rows,sum=0;
   printf("Enter the number: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; i++) {
      for (j = 1; j <= i; j++) {
        
         printf("*");
		 //printf("1");
      }
      printf("\n");
   }
   return 0;

}

// how to print number pattern 

/*#include<stdio.h>
int main(){

   int i, j, rows,sum=0;
   printf("Enter the number: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; i++) {
      for (j = 1; j <= i; j++) {
        
         printf("%d",j);
		 
      }
      printf("\n");
   }
   return 0;

}

/*#include<stdio.h>
int main(){

   int i, j, rows;
   printf("Enter the number: ");
   scanf("%d", &rows);
   for (i = rows; i >=1; i--) {
      for (j = 1; j <= i; j++) {
        
         printf("%d",i);
		 
      }
      printf("\n");
   }
   return 0;

}*/




