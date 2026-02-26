#include <stdio.h>
#include <strings.h>
#include <stdbool.h>
int main (){
    int grade = 97;

    if(grade >= 90){
        if(grade > 93){
            printf("You have a 5d that is an A", grade);
        }else{
            printf("You have an A-!");
        }
        printf("Ypu have a %d thta is an A!", grade);
    } else if(grade >= 80){
        printf("Ypu have a %d thta is an B!", grade);
        } else if(grade >= 70){
        printf("Ypu have a %d thta is an C!", grade);
        } else if(grade >= 60){
        printf("Ypu have a %d thta is an D!", grade);
        } else{
            printf("Oh no you are failling with a %d", grade);
        }
    

        int num = 4; 
        if(num%2 == 0 && (num <10 && num >-10)){
            printf("%d is a dingle dgit even number\n", num);
        }else if(num%2 != 0 && (num <10 && num >-10)){
           printf("%d is a dingle dgit odd number\n", num);
        }else{
            printf("%d is not a single digit number\n");
        }


        char name []= "Eric";
        bool admin = true;
        if (strcmp(name, "Cora") == 0){
            printf("hello  admin %s\n", name);
        }else{
            printf("Hello %s", name);
        }
    return 0;
    }