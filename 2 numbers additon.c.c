//A c programm for addition of two numbers
/* 
Two numbers addition programm
By: Egan Ombaka.
Date: 21/05/2025.
*/

#include<stdio.h>
int main(){
    int a;
    int b;
    int sum;
    
    printf(" Enter the value of a: ");
    scanf("%d" ,&a);
    
    printf(" Enter the value of b: ");
    scanf("%d" , &b);
    
    sum = a+b;
    
    printf("The sum of %d and %d is %d \n", a,b,sum);
    
     return 0;
}