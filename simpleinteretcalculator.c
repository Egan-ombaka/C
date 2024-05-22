//A simple interest calculation programm
/*
A simple interest calculation programm
By:Egan Ombaka
Date:22/05/2024
*/
#include <stdio.h>

int main() {
    
    int p;
    int t;
    float r;
    float si;
    
    printf("Enter the value of The principal: ");
    scanf("%d", &p);
    
    printf("Enter the value of Time: ");
    scanf("%d" ,&t);
    
    printf("Enter the value or Rate: ");
    scanf("%f" ,&r);
    
    si = (p*r*t) / 100;
    
    printf(" simple interest = %.2f" ,si);

    return 0;
}