// switch operator
/*switch(number){
    case c1://do something
    break;
    case c2://do something
    break;
    default://do something
}*/

// example::

#include<stdio.h>
int main(){
    int day;
    printf("enter day(1-7) : ");
    scanf("%d",&day);

    switch (day)
    {
    case 1: printf("Monday \n"); 
        break;
    case 2: printf("Tuesday \n"); 
        break;
    case 3: printf("Wednesday \n"); 
        break;
    case 4: printf("Thrusday \n"); 
        break;
    case 5: printf("Friday \n"); 
        break;
    case 6: printf("Saturday \n"); 
        break;
    case 7: printf("Sunday \n"); 
        break;
    
    default: printf("Please enter a valid number !");
        break;
    }
}