#include <stdio.h>
// includes to get random
#include <stdlib.h>
#include <time.h>


int main (){
    // example 1
    int i = 1;
    while (i <= 10){
        printf("%d\n", i);
        i++;
    }
    // generste random #
    srand(time(NULL));

    printf("%d\n", rand() % 10);
    printf("%d\n", ((rand() % 4) + 1)); // max number 5 min 1 
    printf("%d\n", rand() % 20);

    // example 2 
    int goose = (rand() % 9) + 1;
    int count = 1;
    while (count < goose){
        printf("DUCK!!!\n");
        count ++;
    }
    printf("GOOSE!!!!");

    // example 3
    int timer = 30;
    while (timer > 0){
        printf("%d\n", timer);
        timer = timer - 2;
    }
    printf("Time is up");
    return 0;
}