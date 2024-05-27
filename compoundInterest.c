//A C programm to calculate compound Interest
/*
A C programm to calculate compound interest
By: Egan Ombaka
Date:25/05/2024
*/

#include <stdio.h>
#include<math.h>

int main() {
    int p,t;
    float r,n,a;
    
    printf("Enter the Principal Amount : ");
    scanf("%d" ,&p);
    
    
    printf("Enter the Rate of Interest : ");
    scanf("%f" ,&r);
    
    printf("Enter the Total number of years : ");
    scanf("%d" ,&t);
    
    printf("Enter the Number of compounding a year : ");
    scanf("%f" ,&n);
    
    a=p * pow( (1+r/n), (n*t));
    
    printf("The final amount including interest =%d" ,a);

    return 0;
}
