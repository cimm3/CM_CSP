#include <stdio.h>
// example one
int add (int num_one, int num_two){
    return num_one + num_two;
}

//example 2
void greeting(char* name){
    printf(" Hello %s!\n");
}
// example 3 
float area(int lenght, int width){
    return (float) lenght * width;
}

int main (){
 // exapmle one continue
 int total = add(40, 2);
 printf("%d\n", total);

 // exmaple 2 constinue 
 greeting("Alex");
 greeting("Tis");
 greeting("Katia");

 // example 3 constinue
 float recatangle = area(10,5);
 printf("The area is %.2f \n", recatangle);
 printf("The area is %.2f\n", area(4,6));

    return 0;
}