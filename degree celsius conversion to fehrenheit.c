// temp conversion programm--by egan
#include <stdio.h>
int main(){
    float c, f;
    
    printf("Enter the temperature in centigrade: ");
    scanf("%f", &c);
    
    f = (c*9/5) +32;
    printf("Temperature; %.1f Fenrenheit", f);
    return 0;
}