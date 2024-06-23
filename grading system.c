//A simple grading system using c.
/*
A simple student grading system usng c
By: Egan Ombaka
Date: June 20, 2024
*/
#include <stdio.h>
#include<math.h>
int main() {
    int math,eng,phyc;
    float score;
    char grade;
    
    printf("Enter your Mathematics score: ");
    scanf("%d", &math);
    
    printf("Enter your english score: ");
    scanf("%d", &eng);
    
    printf("Enter your physics score: ");
    scanf("%d", &phyc);
    
    score = (math+eng+phyc) /3;
    printf("Your average score=%.2f\n", score);
   
    if (score >= 70 && score <= 100) {
        grade = 'A';
    } else if (score >= 60 && score < 69) {
        grade = 'B';
    } else if (score >= 50 && score < 59) {
        grade = 'C';
    } else if (score >= 40 && score < 49) {
        grade = 'D';
    } else if (score >= 0 && score < 60) {
        grade = 'F';
    } else {
        printf("Invalid score! Please enter a score between 0 and 100.\n");
        return 1;
    }

    printf("Your mean grade is: %c\n", grade);

    return 0;
}
