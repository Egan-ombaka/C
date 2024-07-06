//c structures
#include<stdio.h>
#include<string.h>

//define the structure
struct student{
    char firstName[20];
    char secondName[20];
    int age;
    char email[50];
    char phoneNumber[15];
    float gpa;
};

int main(){
    // declare the string
    struct student student1;

    //string variables declaration

    strcpy(student1.firstName, "Egan");
    strcpy(student1.secondName, "Ombaka");
    strcpy(student1.email, "eganombaka97@gmail.com");
    student1.age = 65;
    strcpy(student1.phoneNumber, "0748747864");
    student1.gpa = 3.5;

    //print the values

    printf("======STUDENT DETAILS======\n");

    printf("First Name: %s\n", student1.firstName);
    printf("Second Name: %s\n", student1.secondName);
    printf("Email: %s\n", student1.email);
    printf("Age: %d\n", student1.age);
    printf("phone Number: %s\n", student1.phoneNumber);
    printf("GPA : %.2f", student1.gpa);

    return 0;

}
