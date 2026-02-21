// CM P3, first progam C

#include <stdio.h>

int main(){
    char name[50];
    const int lucky = 7;
    const float decimal = 6.67; 
    char breakfast[100];
    char color[50];
    char school_name[200];
    int year = 2026;
    int age[50];
    char eye[50];
    char class[70];
    printf("What is your name\n");
    scanf("%s", name);
    
    printf("Name one breakfast food\n");
    scanf("%s", breakfast);

    printf("What is your favorite color\n");
    scanf("%s", color);

    printf("What is your school name\n");
    scanf("%s", school_name);

    printf("What is your eye color\n");
    scanf("%s", eye);

    printf("How old are you\n");
    scanf("%d", age);

    printf("What is your favorite class\n");
    scanf("%s", class); 

printf("Your name is %s and you are %d years old,and eye color is %s your favorite color is %s. As of %d you go to %s and your favorite class is %s. Your lucky number is %d and decimal is %f.", name, age, eye, color, year,  school_name, class, lucky, decimal);

retun 0;
}
