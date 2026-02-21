// This is a comment in C
#include <stdio.h> // lets us create inputs and outputs 

int main(){
    int number = 12;
    float pi = 3.14;
    char name[] = "Xavier";
    char person[50];
    int age;

     printf("Tell me your name\n");
    scanf("%s", person);
    

    printf("tell me how old you are\n");
    scanf("%d", &age);



    printf("Name is %s and age is %d\n", person, age);

    printf("%d", number);
    printf("%f\n", pi); // \n tells computer to start a new line or move in to next
    printf("%s is %d years old\n", name, age);
    return 0; // always last line of main
}