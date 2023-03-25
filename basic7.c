// how to find the number is odd or even with the help of goto  function

/*#include<stdio.h>
int main(){
	int x;
	printf("enter a number:");
	scanf("%d",&x);
	if(x%2==0)
		goto even;
	else
		goto odd;
	even:
		printf("%d is even",x);
		return;
	odd:
		printf("%d is odd",x);
	
}*/

// print the patten in c

/*#include<stdio.h>
int main(){
	int i,j,rows;
	printf("Enter the number of rows : ");
	scanf("%d",&rows);
	for (i=1;i<=rows;i++){
		for(j=1;j<=rows;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	
	
}*/

// how to reverse number in c

/*#include<stdio.h>
int main(){
	int x,reverse=0,remainder;
	printf("Enter your Number:");
	scanf("%d",&x);
	while(x!=0){
		remainder= x%10;
		reverse=reverse*10+remainder;
		x/=10;
		
	}
	printf("The reverse of the given number %d",reverse);
}
*/



